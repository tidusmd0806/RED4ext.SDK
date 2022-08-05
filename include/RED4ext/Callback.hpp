#pragma once

#include <cstdint>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Memory/Allocators.hpp>

namespace
{
constexpr size_t DefaultFixedBufferSize = 32;
constexpr size_t DefaultFlexibleBufferSize = 24;
}

namespace RED4ext
{
template<typename R, typename... Args>
struct CallbackHandler;

namespace Detail
{
template<typename T, typename R, typename... Args>
concept IsClosure = std::is_class_v<T> && requires(T t, Args... args)
{
    { t(std::forward<Args>(args)...) } -> std::convertible_to<R>;
};

template<typename R, typename... Args>
using UnboundFunctionPtr = R (*)(Args...);

template<typename C, typename R, typename... Args>
using MemberFunctionPtr = R (C::*)(Args...);

template<typename R, typename... Args>
struct UnboundFunctionTarget
{
    using TargetFunc = UnboundFunctionPtr<R, Args...>;

    TargetFunc func;
};

template<typename C, typename R, typename... Args>
struct MemberFunctionTarget
{
    using TargetFunc = MemberFunctionPtr<C, R, Args...>;
    using ContextPtr = C*;

    ContextPtr context;
    TargetFunc func;
};

template<typename L, typename R, typename... Args>
requires IsClosure<L, R, Args...>
struct ClosureTarget : L
{
    using ClosureType = L;
    using L::L;
};

template<typename T>
struct CallbackHandlerImpl;

template<typename R, typename... Args>
struct CallbackHandlerImpl<UnboundFunctionTarget<R, Args...>>
{
    using TargetType = UnboundFunctionTarget<R, Args...>;

    static R Invoke(TargetType* aTarget, Args&&... aArgs)
    {
        (aTarget->func)(std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        aDst->func = aSrc->func;
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        aDst->func = aSrc->func;
        aSrc->func = nullptr;
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->func = nullptr;
    }
};

template<typename C, typename R, typename... Args>
struct CallbackHandlerImpl<MemberFunctionTarget<C, R, Args...>>
{
    using TargetType = MemberFunctionTarget<C, R, Args...>;

    static R Invoke(TargetType* aTarget, Args&&... aArgs)
    {
        ((aTarget->context)->*(aTarget->func))(std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        aDst->context = aSrc->context;
        aDst->func = aSrc->func;
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        aDst->context = aSrc->context;
        aDst->func = aSrc->func;
        aSrc->context = nullptr;
        aSrc->func = nullptr;
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->context = nullptr;
        aTarget->func = nullptr;
    }
};

template<typename L, typename R, typename... Args>
requires IsClosure<L, R, Args...>
struct CallbackHandlerImpl<ClosureTarget<L, R, Args...>>
{
    using TargetType = typename ClosureTarget<L, R, Args...>::ClosureType;

    static R Invoke(TargetType* aTarget, Args&&... aArgs)
    {
        (*aTarget)(std::forward<Args>(aArgs)...);
    }

    static void Copy(TargetType* aDst, TargetType* aSrc)
    {
        new (aDst) TargetType(*aSrc);
    }

    static void Move(TargetType* aDst, TargetType* aSrc)
    {
        new (aDst) TargetType(std::move(*aSrc));
        aSrc->~TargetType();
    }

    static void Destruct(TargetType* aTarget)
    {
        aTarget->~TargetType();
    }
};

template<typename Impl, typename R, typename... Args>
struct CallbackHandlerBuilder
{
    using HandlerType = CallbackHandler<R, Args...>;

    static HandlerType* Build()
    {
        static HandlerType s_handler{ &Impl::Invoke, &Impl::Copy, &Impl::Move, &Impl::Destruct };
        return &s_handler;
    }
};
} // namespace Detail

template<typename R, typename... Args>
struct CallbackHandler
{
    template<typename T = void>
    using InvokeFunc = R (*)(T* aTarget, Args&&... aArgs);

    template<typename T = void>
    using CopyFunc = void (*)(T* aDst, T* aSrc);

    template<typename T = void>
    using MoveFunc = CopyFunc<T>;

    template<typename T = void>
    using DestructFunc = void (*)(T* aTarget);

    CallbackHandler(InvokeFunc<> aInvoke, CopyFunc<> aCopy, MoveFunc<> aMove, DestructFunc<> aDestruct)
        : invoke(aInvoke)
        , copy(aCopy)
        , move(aMove)
        , destruct(aDestruct)
    {
    }

    template<typename T>
    CallbackHandler(InvokeFunc<T> aInvoke, CopyFunc<T> aCopy, MoveFunc<T> aMove, DestructFunc<T> aDestruct)
        : invoke(reinterpret_cast<InvokeFunc<>>(aInvoke))
        , copy(reinterpret_cast<CopyFunc<>>(aCopy))
        , move(reinterpret_cast<MoveFunc<>>(aMove))
        , destruct(reinterpret_cast<DestructFunc<>>(aDestruct))
    {
    }

    InvokeFunc<> invoke;     // 00
    CopyFunc<> copy;         // 08
    MoveFunc<> move;         // 10
    DestructFunc<> destruct; // 18
};
RED4EXT_ASSERT_SIZE(CallbackHandler<void>, 0x20);

template<typename T, size_t Size = DefaultFixedBufferSize>
class FixedCallback;

template<typename R, typename... Args, size_t Size>
class FixedCallback<R (*)(Args...), Size>
{
public:
    FixedCallback(Detail::UnboundFunctionPtr<R, Args...> aFunc)
    {
        Detail::UnboundFunctionTarget<R, Args...> target{aFunc};
        Initialize(buffer, &target);
    }

    template<typename C>
    FixedCallback(C* aContext, Detail::MemberFunctionPtr<C, R, Args...> aFunc)
    {
        Detail::MemberFunctionTarget<C, R, Args...> target{aContext, aFunc};
        Initialize(buffer, &target);
    }

    template<typename L>
    requires Detail::IsClosure<L, R, Args...>
    FixedCallback(L&& aClosure)
    {
        using TargetType = Detail::ClosureTarget<L, R, Args...>;

        static_assert(sizeof(TargetType) <= Size, "Closure stack size is too big for callback");

        Initialize(buffer, reinterpret_cast<TargetType*>(&aClosure));
    }

    FixedCallback(const FixedCallback& aOther)
    {
        CopyHandler(aOther);
        CopyTarget(buffer, aOther.buffer);
    }

    FixedCallback(FixedCallback&& aOther) noexcept
    {
        CopyHandler(aOther);
        MoveTarget(buffer, aOther.buffer);
    }

    ~FixedCallback()
    {
        DestroyTarget(buffer);
        ResetHandler();
    }

    R operator()(Args&&... aArgs)
    {
        return InvokeTarget(buffer, std::forward<Args>(aArgs)...);
    }

    uint8_t buffer[Size];
    CallbackHandler<R, Args...>* handler;

protected:
    FixedCallback() = default;

    template<class TargetType>
    inline void Initialize(void* aDst, TargetType* aSrc)
    {
        using HandlerImpl = Detail::CallbackHandlerImpl<TargetType>;
        using HandlerFactory = Detail::CallbackHandlerBuilder<HandlerImpl, R, Args...>;

        handler = HandlerFactory::Build();
        handler->copy(aDst, aSrc);
    }

    inline void CopyHandler(FixedCallback& aOther)
    {
        handler = aOther.handler;
    }

    inline void ResetHandler()
    {
        handler = nullptr;
    }

    inline R InvokeTarget(void* aTarget, Args&&... aArgs)
    {
        return (handler->invoke)(aTarget, std::forward<Args>(aArgs)...);
    }

    inline void CopyTarget(void* aDst, void* aSrc)
    {
        if (handler)
        {
            handler->copy(aDst, aSrc);
        }
    }

    inline void MoveTarget(void* aDst, void* aSrc)
    {
        if (handler)
        {
            handler->move(aDst, aSrc);
        }
    }

    inline void DestroyTarget(void* aTarget)
    {
        if (handler)
        {
            handler->destruct(aTarget);
        }
    }
};
RED4EXT_ASSERT_SIZE(FixedCallback<void (*)()>, DefaultFixedBufferSize + 0x8);
RED4EXT_ASSERT_OFFSET(FixedCallback<void (*)()>, handler, DefaultFixedBufferSize);

template<typename T, size_t Size = DefaultFlexibleBufferSize>
class FlexibleCallback;

template<typename R, typename... Args, size_t Size>
class FlexibleCallback<R (*)(Args...), Size> : FixedCallback<R (*)(Args...), Size>
{
public:
    using BaseType = FixedCallback<R (*)(Args...), Size>;
    using AllocatorType = Memory::DefaultAllocator;

    FlexibleCallback(Detail::UnboundFunctionPtr<R, Args...> aFunc)
    {
        Detail::UnboundFunctionTarget<R, Args...> target{aFunc};
        SetBufferMode(sizeof(target));
        BaseType::Initialize(GetBuffer(), &target);
    }

    template<typename C>
    FlexibleCallback(C* aContext, Detail::MemberFunctionPtr<C, R, Args...> aFunc)
    {
        Detail::MemberFunctionTarget<C, R, Args...> target{aContext, aFunc};
        SetBufferMode(sizeof(target));
        BaseType::Initialize(GetBuffer(), &target);
    }

    template<typename L>
    requires Detail::IsClosure<L, R, Args...>
    FlexibleCallback(L&& aClosure)
    {
        using TargetType = Detail::ClosureTarget<L, R, Args...>;

        SetBufferMode(sizeof(TargetType));
        BaseType::Initialize(GetBuffer(), reinterpret_cast<TargetType*>(&aClosure));
    }

    FlexibleCallback(const FlexibleCallback& aOther)
    {
        BaseType::CopyHandler(aOther);
        SetBufferMode(aOther.GetSize());
        BaseType::CopyTarget(GetBuffer(), aOther.GetBuffer());
    }

    FlexibleCallback(FlexibleCallback&& aOther) noexcept
    {
        BaseType::CopyHandler(aOther);
        SetBufferMode(aOther.GetSize());
        BaseType::MoveTarget(GetBuffer(), aOther.GetBuffer());
    }

    ~FlexibleCallback()
    {
        BaseType::DestroyTarget(GetBuffer());
        ResetBuffer();
        BaseType::ResetHandler();
    }

    R operator()(Args&&... aArgs)
    {
        return BaseType::InvokeTarget(GetBuffer(), std::forward<Args>(aArgs)...);
    }

    uint64_t unk20;
    uint32_t extendedBufferSize;

protected:
    static constexpr uint32_t ExtendedFlag = 0x80000000;
    static constexpr uint32_t SizeMask = ~ExtendedFlag;

    inline bool IsExtendedMode()
    {
        return extendedBufferSize != 0;
    }

    inline bool GetSize()
    {
        return extendedBufferSize & SizeMask;
    }

    inline void SetBufferMode(uint32_t aSize)
    {
        if (aSize > Size)
        {
            extendedBufferSize = aSize;
            extendedBufferSize |= ExtendedFlag;

            auto extendedBufferPtr = AllocatorType::Get()->Alloc(aSize).memory;
            *reinterpret_cast<void**>(BaseType::buffer) = extendedBufferPtr;
        }
        else
        {
            extendedBufferSize = 0;
        }
    }

    inline void ResetBuffer()
    {
        if (IsExtendedMode())
        {
            AllocatorType::Get()->Free(GetBuffer());
            extendedBufferSize = 0;
        }
    }

    inline void* GetBuffer()
    {
        if (IsExtendedMode())
        {
            return *reinterpret_cast<void**>(BaseType::buffer);
        }

        return BaseType::buffer;
    }
};
RED4EXT_ASSERT_SIZE(FlexibleCallback<void (*)()>, DefaultFlexibleBufferSize + 0x18);
RED4EXT_ASSERT_OFFSET(FlexibleCallback<void (*)()>, extendedBufferSize, DefaultFlexibleBufferSize + 0x10);
} // namespace RED4ext
