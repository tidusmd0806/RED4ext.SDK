#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/vehiclePhysics.hpp>
#include <RED4ext/Scripting/Natives/vehiclePhysicsData.hpp>
#include <RED4ext/Scripting/Natives/vehicleAirControl.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ChassisComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OccupantSlotComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Vehicle_Record.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/Controller.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CameraManager.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Puppet.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IBlackboard.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>
#include <RED4ext/Scripting/Natives/actionActionInterface.hpp>
#include <RED4ext/Scripting/Natives/actionActionBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RuntimeSystemPhysics.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AutonomousData.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/PersistentDataPS.hpp>

namespace RED4ext
{
namespace weapon { struct Object; }
namespace AI { struct Archetype; }
namespace game { struct VehicleSystem; }
namespace world { struct RuntimeSystemPhysics; }
namespace ent { struct Entity; }
namespace vehicle
{
struct Physics;
struct PhysicsData;
struct AirControl;
struct Weapon;
struct BaseObject;

//struct Interface : game::Object::Interface
//{
//    virtual uint64_t __fastcall Destruct(char a1) override; // 00
//
//    // Returns 0
//    virtual uint64_t __fastcall sub_08() override;
//};

enum class Type : __int8
{
  Car = 0x0,
  Bike = 0x1,
  AV = 0x2,
  Tank = 0x3,
  Yacht = 0x4,
  Unknown = 0x5,
};

struct Unk580
{
    // 1.52 RVA: 0x1C3A0B0 / 29597872
    /// @pattern 80 E2 01 88 91 CA 03 00 00 C3
    void __fastcall Update3CA(char a2);

    // 1.52 RVA: 0x1C370D0 / 29585616
    /// @pattern 40 53 48 83 EC 20 80 B9 D6 03 00 00 00 48 8B DA 74 09 48 8B 81 B0 01 00 00 EB 07 48 8B 81 B8 01
    void *__fastcall GetAudioResourceMetadata(void *a2);

    // 1.52 RVA: 0x1C3D700 / 29611776
    /// @pattern 40 56 48 83 EC 50 48 8B F1 48 8B 89 38 01 00 00 E8 8B 1C 01 00 84 C0 0F 84 B5 01 00 00 4C 8B 86
    void __fastcall UpdateAudio();

    // 1.52 RVA: 0x1C3C0A0 / 29606048
    /// @pattern 48 8B C4 55 41 56 41 57 48 8D 6C 24 80 48 81 EC 80 01 00 00 0F 28 C2 0F 29 78 A8 F3 0F 58 81 C0
    void __fastcall Unknown(__int64 a2, float a3, uint64_t *a4);

    // 1.52 RVA: 0x1C3BD10 / 29605136a
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 7C 24 20 41 54 41 56 41 57 48 83 EC 60 48 8B 81 B0 01 00 00
    __int64 __fastcall UpdateWheelEmitters(__int64 a2);

    // 1.52 RVA: 0x1C36B10 / 29584144
    /// @pattern 48 83 EC 38 0F B6 91 CF 03 00 00 85 D2 74 17 83 EA 01 0F 84 07 01 00 00 83 EA 01 74 5C 83 FA 01
    bool __fastcall ShouldUseSomeAVListener();

    // 1.52 RVA: 0x1C38700 / 29591296
    /// @pattern 40 53 56 57 48 83 EC 40 80 B9 00 04 00 00 03 49 8B F8 48 8B D9 0F 85 E0 00 00 00 48 8B 89 38 01
    void __fastcall ToggleHorn(bool a2, uint8_t *a3);

    // 1.52 RVA: 0x1C3A8D0 / 29599952
    /// @pattern 48 83 EC 38 0F 57 C0 45 84 C0 74 19 8B C2 0F 57 D2 89 91 84 01 00 00 C6 81 88 01 00 00 01 F3 48
    __int64 __fastcall SetRadioTier(int a2, bool a3);

    // 1.52 RVA: 0x1C3A790 / 29599632
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 20 48 83 B9 78 01 00 00 00 41 0F B6 E8
    void __fastcall NextRadioReceiverStation(uint32_t direction, bool);

    // 1.52 RVA: 0x1C37E80 / 29589120
    /// @pattern 40 53 48 83 EC 20 48 83 B9 78 01 00 00 00 48 8B D9 0F 84 B9 00 00 00 48 8B 81 50 01 00 00 80 B8
    bool __fastcall IsRadioReceiverActive();

    // 1.52 RVA: 0x1C35A20 / 29579808
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 48 8B B9 A0 03 00 00 48 8B D9 48 85 FF 74 15 48 8B CF E8 6F 14 B0
    ~Unk580();

    int64_t unk00;
    uint64_t unk08[32];
    float unk108;
    float unk10C;
    float unk110;
    float unk114;
    float unk118;
    float unk11C;
    float unk120;
    float unk124;
    uint32_t unk128;
    uint32_t unk12C;
    uint32_t unk130;
    uint32_t unk134;
    BaseObject *vehicle;
    uint64_t player_audio_resource_hash;
    uint64_t traffic_audio_resource_hash;
    Unk580 *self;
    uint32_t unk158;
    uint32_t unk15C;
    uint8_t unk160;
    uint8_t unk161;
    uint8_t unk162;
    uint8_t unk163;
    uint8_t unk164;
    uint8_t unk165;
    uint8_t unk166;
    uint8_t unk167;
    uint64_t unk168[2];
    uint64_t *unk178;
    uint8_t unk180;
    uint8_t unk181;
    uint8_t unk182;
    uint8_t unk183;
    uint8_t unk184;
    uint8_t unk185;
    uint8_t unk186;
    uint8_t unk187;
    uint64_t unk188[2];
    void *unk198;
    uint64_t unk1A0[2];
    audio::VehicleMetadata *player_audio_resource_metadata;
    audio::VehicleMetadata *traffic_audio_resource_metadata;
    uint64_t unk1C0[24];
    uint64_t unk280[1];
    uint32_t unk288[42];
    uint32_t unk330;
    uint32_t unk334;
    uint64_t unk338[18];
    uint8_t unk3C8;
    uint8_t isTPP2;
    uint8_t unk3CA;
    uint8_t unk3CB[4];
    Type type;
    uint8_t unk3D0;
    uint8_t unk3D1;
    uint8_t unk3D2;
    uint8_t unk3D3;
    uint8_t unk3D4;
    uint8_t unk3D5;
    uint8_t usePlayer;
    uint8_t unk3D7;
    uint64_t unk3D8[5];
    uint8_t unk400;
    uint8_t isTPP;
    uint8_t unk402;
    uint8_t unk403;
    float unk404;
    uint64_t unk408;
    uint64_t unk410;
    uint64_t unk418;
    float unk420;
    uint64_t unk428;
    uint64_t unk430;
    uint64_t unk438;
    uint64_t unk440;
    uint64_t unk448;
    float unk450;
    float unk454;
    uint64_t unk458;
    float unk460;

};

struct Unk568 {

    // 1.52 RVA: 0x1AB9B80 / 28023680
    /// @pattern C7 41 3C 00 00 80 3F 33 C0 48 89 41 20 0F 57 C0 89 41 28 48 89 41 30 89 41 38 48 89 01 48 89 41
    Unk568();

    // 1.52 RVA: 0x1ABAA10 / 28027408
    /// @pattern 0F 10 81 A0 00 00 00 0F 57 C9 0F 11 81 B0 00 00 00 0F 11 89 A0 00 00 00 C3
    void __fastcall CopyOverCollisionForce();

    // 1.52 RVA: 0x1ABAA30 / 28027440
    /// @pattern 0F 10 02 0F 11 81 D0 00 00 00 C3
    void __fastcall SetUnkD0(void *a2);

    // 1.52 RVA: 0x1ABAA40 / 28027456
    /// @pattern 0F 10 02 0F 11 81 C0 00 00 00 C3
    void __fastcall SetRotationalVelocityMaybe(Vector4 *);

    // 1.52 RVA: 0x1ABAA50 / 28027472
    /// @pattern 48 83 EC 58 0F 29 74 24 40 0F 29 7C 24 30 44 0F 29 44 24 20 44 0F 29 4C 24 10 44 0F 10 0A 44 0F
    __int64 __fastcall SetAcceleration(Vector4 *);

    // 1.52 RVA: 0x1ABACA0 / 28028064
    /// @pattern 48 83 EC 48 0F 10 61 30 0F 28 DC 0F 29 74 24 30 0F 59 DC 0F 29 7C 24 20 44 0F 29 44 24 10 44 0F
    void __fastcall SetLinearVelocityEtc(Vector4 *);

	float unk00[8]; // ",	0,	0x80000400,	-1,	32);
	WorldTransform worldTransform; // ",	0X20,	0x60000400,	get_struc_id("RED4ext::WorldTransform"),	32);
	Vector4 linearVelocity; // ",	0X40,	0x60000400,	get_struc_id("RED4ext::Vector4"),	16);
	Vector4 acceleration; // ",	0X50,	0x60000400,	get_struc_id("RED4ext::Vector4"),	16);
    // actually velocity, maybe - dot product taken @ 0x1CED337
	Transform unk60; // ",	0X60,	0x60000400,	get_struc_id("RED4ext::Transform"),	32);
	Vector4 unk80; // ",	0X80,	0x60000400,	get_struc_id("RED4ext::Vector4"),	16);
	Vector4 unk90; // ",	0X90,	0x60000400,	get_struc_id("RED4ext::Vector4"),	16);
	float currentForce; // ",	0XA0,	0x80000400,	-1,	4);
	Vector3 currentForceVector; // ",	0XA4,	0x60000400,	get_struc_id("RED4ext::Vector3"),	12);
	float collisionForce; // ",	0XB0,	0x80000400,	-1,	4);
	Vector3 collisionForceVector; // ",	0XB4,	0x60000400,	get_struc_id("RED4ext::Vector3"),	12);
	Vector4 rotationalVelocityMaybe; // ",	0XC0,	0x60000400,	get_struc_id("RED4ext::Vector4"),	16);
	float unkD0[4]; // ",	0XD0,	0x80000400,	-1,	16);
	float unkE0; // ",	0XE0,	0x80000400,	-1,	4);
	float unkE4; // ",	0XE4,	0x80000400,	-1,	4);
	float unkE8; // ",	0XE8,	0x80000400,	-1,	4);
	float unkEC; // ",	0XEC,	0x80000400,	-1,	4);
	float accelerationMaybe; // ",	0XF0,	0x80000400,	-1,	4);
	float unkF4; // ",	0XF4,	0x80000400,	-1,	4);
	float unkF8; // ",	0XF8,	0x80000400,	-1,	4);
	float unkFC; // ",	0XFC,	0x80000400,	-1,	4);
	float unk100; // ",	0X100,	0x80000400,	-1,	4);
	float unk104; // ",	0X104,	0x80000400,	-1,	4);
	float unk108; // ",	0X108,	0x80000400,	-1,	4);
	float unk10C; // ",	0X10C,	0x80000400,	-1,	4);
	float unk110; // ",	0X110,	0x80000400,	-1,	4);
	float downforceMaybe; // ",	0X114,	0x80000400,	-1,	4);
	float gravityScalar; // ",	0X118,	0x80000400,	-1,	4);
	float unk11C; // ",	0X11C,	0x80000400,	-1,	100);
};

struct Unk570 {
    // 1.52 RVA: 0x1CFA220 / 30384672
    /// @pattern 48 89 5C 24 10 4C 89 4C 24 20 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 E0 F9 FF FF 48 81 EC
    void __fastcall Setup(__int64 fxCollisionRecord, __int64 fxWheelsRecord, __int64 fxWheelsDecalsRecord);

    // BaseObject *vehicle;
    // void *animationController;
    // RED4ext::anim::AnimFeature_VehiclePassenger *vehiclePassenger;
    // RED4ext::RefCnt *vehiclePassegner::ref;
    // RED4ext::DynArray unk20;
    // RED4ext::DynArray unk30;
    // RED4ext::DynArray unk40;
    // uint64_t unk48[2];
    // RED4ext::DynArray unk60;
    // RED4ext::DynArray unk70;
    // uint64_t veh_engine_throttle_input;
    // uint64_t unk88;
    // uint64_t veh_motion_blur_scale;
    // uint64_t unk98;
    // uint64_t unkA0;
    // uint64_t unkA8;
    // RED4ext::DynArray unkB0;
    // RED4ext::DynArray unkC0;
    // RED4ext::HashMap unkD0;
    // RED4ext::HashMap unk100;
    // RED4ext::HashMap unk130;
    // uint64_t unk160;
    // RED4ext::DynArray unk168;
    // uint64_t unk178;
};

struct Unk588 {

    // 1.52 RVA: 0x1C3FB20 / 29621024
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 89 11 48 8B C2 C7 81 50 03 00 00 00 00 00 00 48
    __int64 __fastcall Unknown(BaseObject *vehicle, __int64 a3);

    uint64_t unk00;
    uint8_t affectsTPPAudio;
    uint32_t unk0C;
    uint32_t unk10;
    uint32_t unk14;
    uint64_t unk18;
    uint64_t unk20;
    uint64_t unk28;
    uint64_t unk30;
    uint64_t unk38;
    uint64_t unk40;
    uint64_t unk48[100];
    uint64_t companionRelated;
};

struct Unk368
{
  uint64_t unk00;
  uint64_t unk08;
  move::Component *moveComponent;
  void *unk18;
  BaseObject *vehicle;
};


enum PhysicsState
{
  Traffic = 0x1,
  Unk2 = 0x2,
  Unk4 = 0x4,
  Unk8 = 0x8,
  Asleep = 0x10,
  Unk20 = 0x20,
  Parked = 0x40,
  PlayerControlledMaybe = 0x80,
  Chase = 0x100,
};


#pragma pack(push, 1)
struct BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";
    static constexpr const uintptr_t VFT_RVA = vehicleBaseObject_VFT_RVA;

    // 1.6 RVAs
    // static constexpr const uintptr_t On_vehicleChangeMovableEvent_Addr = 29694240;
    // static constexpr const uintptr_t On_vehicleChangeStateEvent_Addr = 1656944; // empty function
    // static constexpr const uintptr_t On_gameinteractionsChoiceEvent_Addr = 1656944; // empty function
    // static constexpr const uintptr_t On_vehicleToggleQuestForceBrakingEvent_Addr = 29706032;
    // static constexpr const uintptr_t On_vehicleToggleQuestCustomFPPLockOffEvent_Addr = 1656944; // empty function
    // static constexpr const uintptr_t On_vehicleToggleQuestWeaponEnabledEvent_Addr = 29706048;
    // static constexpr const uintptr_t On_vehicleTeleportEvent_Addr = 29705616;
    // static constexpr const uintptr_t On_vehicleAIMountedE3Hack_Addr = 29696608;
    // static constexpr const uintptr_t On_vehicleAudioEvent_Addr = 29694096;
    // static constexpr const uintptr_t On_vehicleStartedMountingEvent_Addr = 29703392;
    // static constexpr const uintptr_t On_vehicleFinishedMountingEvent_Addr = 29696720;
    // static constexpr const uintptr_t On_vehicleDriveToPointEvent_Addr = 29698016;
    // static constexpr const uintptr_t On_vehicleDriveToNodeRefEvent_Addr = 29698192;
    // static constexpr const uintptr_t On_vehicleDriveToGameObjectEvent_Addr = 29698080;
    // static constexpr const uintptr_t On_vehicleDriveFollowEvent_Addr = 29697472;
    // static constexpr const uintptr_t On_vehicleDriveFollowSplineEvent_Addr = 29697632;
    // static constexpr const uintptr_t On_vehicleStopDriveToPointEvent_Addr = 29704640;
    // static constexpr const uintptr_t On_vehicleStartDynamicMovementEvent_Addr = 29702896;
    // static constexpr const uintptr_t On_vehicleStealEvent_Addr = 29704624;
    // static constexpr const uintptr_t On_gameeventsHitEvent_Addr = 29698608;
    // static constexpr const uintptr_t On_gameeventsVehicleDestructionEvent_Addr = 29706128;
    // static constexpr const uintptr_t On_enteventsPhysicalImpulseEvent_Addr = 29701792;
    // static constexpr const uintptr_t On_vehicleJoinTrafficVehicleEvent_Addr = 29701472;
    // static constexpr const uintptr_t On_vehicleDriveSplineReverseEvent_Addr = 29694112;
    // static constexpr const uintptr_t On_vehicleStartConvoyEvent_Addr = 29694480;
    // static constexpr const uintptr_t On_vehicleAssignConvoyEvent_Addr = 29694256;
    // static constexpr const uintptr_t On_vehicleDetachPartEvent_Addr = 29696560;
    // static constexpr const uintptr_t On_vehicleDetachAllPartsEvent_Addr = 29696544;
    // static constexpr const uintptr_t On_vehicleHasExplodedEvent_Addr = 29698256;
    // static constexpr const uintptr_t On_vehicleOnPartDetachedEvent_Addr = 29701504;
    // static constexpr const uintptr_t On_vehicleGridDestructionEvent_Addr = 29694608;
    // static constexpr const uintptr_t On_vehicleToggleRadioReceiverEvent_Addr = 29706080;
    // static constexpr const uintptr_t On_vehicleVehicleAudioMultipliersEvent_Addr = 29706096;
    // static constexpr const uintptr_t On_vehicleChangeRadioReceiverStationEvent_Addr = 29694176;
    // static constexpr const uintptr_t On_vehicleChangeRadioTierEvent_Addr = 29694208;
    // static constexpr const uintptr_t On_entAppearanceChangeFinishEvent_Addr = 29696704;
    // static constexpr const uintptr_t On_entAppearanceStatusEvent_Addr = 29756944;
    // static constexpr const uintptr_t On_entAppearanceMeshLoadedEvent_Addr = 29696704;
    // static constexpr const uintptr_t On_vehicleDoneActionEvent_Addr = 29690304;
    // static constexpr const uintptr_t On_gameCrowdEntityReuseEvent_Addr = 29694512;
    // static constexpr const uintptr_t On_gameQuestOrSceneSetVehiclePhysicsActive_Addr = 29694240;
    // static constexpr const uintptr_t On_gamePlayerTakeControlAsParent_Addr = 1656944; // empty function
    // static constexpr const uintptr_t On_gamePlayerTakeControlAsChild_Addr = 29702176;
    // static constexpr const uintptr_t On_gamePlayerReleaseControlAsParent_Addr = 1656944; // empty function
    // static constexpr const uintptr_t On_gamePlayerReleaseControlAsChild_Addr = 29701936;
    // static constexpr const uintptr_t On_vehicleGlassDestructionEvent_Addr = 29697968;


// overridden member functions

    // calls 268, 270, 350
    virtual void Attach(void *) override;

    virtual uintptr_t Detach() override;

    virtual void sub_168(uint16_t) override;

    virtual CClass* __fastcall GetNativeType() override;

    virtual void __fastcall OnRequestComponents(char *) override;

    virtual CString* __fastcall sub_1C0(CString*) override;

    // Looks at unk580, sub_1D0
    virtual RED4ext::CName* __fastcall GetAudioResourceName(RED4ext::CName*) override;

    // Somethign with unk388 & vehicle controller, sub_1F8
    virtual uint64_t __fastcall OnTakeControl(game::ComponentHelper*) override; 

    // Also sends out some red event
    virtual uint64_t __fastcall sub_218(WorldTransform*) override;

// new member functions

    // Loads some vehicle tweaks and sets things up
    virtual void __fastcall sub_268();

    // Loads more tweaks and vehicle weapons
    virtual void __fastcall sub_270();

    // Returns 0.0
    virtual double __fastcall sub_278();

    // Updates physics World Transform, creates physicsData, engine data
    virtual int32_t __fastcall sub_280();

    // Calls physics sub_80
    virtual uint64_t __fastcall sub_288();

    // Calls physics sub_88
    virtual uint64_t __fastcall sub_290();

    // Returns 45.0
    virtual float __fastcall sub_298();

    // Empty function
    virtual void __fastcall sub_2A0();

    // Something with blackboard and effect data
    virtual uint64_t __fastcall sub_2A8();

    // Empty function
    virtual uint64_t __fastcall sub_2B0(uint64_t, uint64_t);

    // Call physics sub_58, runs update with chassis
    virtual void __fastcall sub_2B8(uint64_t, uint64_t);

    // Empty function
    virtual void __fastcall sub_2C0(float);

    // Raytraces, decides isOnGround, physics sub_C0 - only runs if physicsState == 0
    virtual void __fastcall sub_2C8();

    // Empty function, calls physics sub_118
    virtual void __fastcall sub_2D0();

    // Empty function, calls physics sub_120
    virtual void __fastcall sub_2D8();

    // Something with the entity stored separately flag, maybe mounting related, calls sub_310
    virtual uint64_t __fastcall sub_2E0();

    virtual uint64_t __fastcall sub_2E8();

    // return one
    virtual uint64_t __fastcall sub_2F0();

    // updates wheel positions, calls sub_310
    virtual uint64_t __fastcall sub_2F8();

    // Get vehicle record handle
    virtual Handle<game::data::Vehicle_Record> * __fastcall GetRecord(Handle<game::data::Vehicle_Record>*);

    // Get unk tweak record/hash
    virtual uint64_t __fastcall sub_308(uint64_t *);

    // mount/engine related
    // TurnEngineOn
    virtual uint64_t __fastcall sub_310(bool);

    // checks something in engine data - has throttle input
    // IsEngineTurnedOn
    virtual bool __fastcall sub_318();

    // some physics & wheel stuff with unk568
    virtual float __fastcall sub_320();
    virtual uint64_t __fastcall sub_328(Handle<ISerializable>*);
    virtual uint64_t __fastcall sub_330(Handle<ISerializable>*);
    virtual uint64_t __fastcall sub_338(Handle<ISerializable>*);
    virtual uint64_t __fastcall sub_340(Handle<ISerializable>*);
    // return one
    virtual uint64_t __fastcall sub_348();

    // Something wheels
    virtual uint64_t __fastcall sub_350();

    // Something vehicle audio
    virtual uint64_t __fastcall sub_358();

    // Process vehicle weapons
    virtual void __fastcall sub_360(float, uint32_t index);

    // Fire vehicle weapon, calls generic weapon shoot
    virtual uint64_t __fastcall sub_368(weapon::Object *weaponObject, Vector4 *weaponPosition, Vector4 *offset, Vector4 *tracePosition, float range, __int64 numProjectiles, __int64 a8, __int64 a9, __int64 a10);

    // Empty Function
    virtual void __fastcall sub_370();

    // Get Aim Trace Position
    virtual Vector3* __fastcall sub_378(Vector3*);

    // Get shoot value for index
    virtual uint8_t __fastcall sub_380(int);

// non-virtual methods

    // 1.52 RVA: 0x1C60690 / 29755024
    // 1.6  RVA: 0x1C8D240 / 29938240
    // 1.61 RVA: 0x1C8D4C0
    /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 20 57 48 83 EC 30 8B B1 50 02 00 00 41 0F B6 E8 8B FA
    inline void __fastcall SetPhysicsState(RED4ext::vehicle::PhysicsState a2, bool a3) {
        RelocFunc<decltype(&BaseObject::SetPhysicsState)> call(0x1C8D4C0);
        call(this, a2, a3);
    }

    // 1.52 RVA: 0x1C4C4F0 / 29672688
    // 1.6  RVA: 0x1C78F70 / 29855600
    // 1.61 RVA: 0x1C791E0
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8B F9 48 8B 89 B0 02 00 00 48 85 C9 74 05 E8
    inline void __fastcall UnsetPhysicsStates() {
        RelocFunc<decltype(&BaseObject::UnsetPhysicsStates)> call(0x1C791E0);
        call(this);
    }

    // 1.52 RVA: 0x1C4D3A0 / 29676448
    /// @pattern 48 8B 81 B8 02 00 00 F3 0F 10 80 BC 01 00 00 C3
    float __fastcall GetTotalMass();

    // 1.52 RVA: 0x1C4D3B0 / 29676464
    /// @pattern 48 8B 81 B8 02 00 00 F3 0F 10 40 40 C3
    float __fastcall GetInverseMass();

    // 1.52 RVA: 0x1C4D3C0 / 29676480
    /// @pattern 48 8B 81 08 05 00 00 48 8B 89 B8 02 00 00 F3 0F 10 40 68 F3 0F 59 81 BC 01 00 00 C3
    float __fastcall GetGravitationalForce();

    // 1.52 RVA: 0x1C4D3E0 / 29676512
    /// @pattern 8B 81 0C 06 00 00 C3
    float __fastcall GetUnk60C();

    // 1.52 RVA: 0x1C4D3F0 / 29676528
    /// @pattern 48 89 5C 24 10 48 89 7C 24 20 55 48 8D 6C 24 A9 48 81 EC 90 00 00 00 83 B9 D0 05 00 00 00 48 8B
    CString *__fastcall GetDisplayName(CString *);

    // 1.52 RVA: 0x1C4D630 / 29677104
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 30 48 8B 99 C0 02 00 00 48 8B FA 48 8B
    Handle<void> *__fastcall GetCurveSetData(Handle<void> *);

    // 1.52 RVA: 0x1C4D7B0 / 29677488
    /// @pattern 48 8B 81 08 05 00 00 C3
    world::RuntimeSystemPhysics *__fastcall GetVehicleSystem();

    // 1.52 RVA: 0x1C4D7E0 / 29677536
    /// @pattern 40 53 48 83 EC 20 48 8B DA 44 3B 81 4C 09 00 00 73 2A 41 8B C0 4C 8D 04 40 48 8B 81 40 09 00 00
    Quaternion *__fastcall GetWeaponOrientation(Quaternion *, uint32_t index);

    // 1.52 RVA: 0x1C4E190 / 29680016
    /// @pattern 40 55 56 57 48 8D 6C 24 B9 48 81 EC F0 00 00 00 48 8D B1 28 09 00 00 0F 29 B4 24 D0 00 00 00 48
    void __fastcall HornForDuration();

    // 1.52 RVA: 0x1C4E3F0 / 29680624
    /// @pattern 48 8B C4 55 56 57 48 8D 68 A1 48 81 EC F0 00 00 00 0F 29 70 D8 48 8D B1 20 09 00 00 48 8B F9 0F
    void __fastcall HornForDurationDelayed(float xmm1_4_0);

    // 1.52 RVA: 0x1C49080 / 29659264
    /// @pattern 48 83 EC 48 48 89 5C 24 50 48 8B D9 48 89 74 24 60 48 8D 4A 20 4C 89 74 24 38 48 8B F2 E8 8E 52
    void __fastcall ClearFinishMountingDelay(void *);

    // 1.52 RVA: 0x1C491C0 / 29659584
    /// @pattern C7 81 B4 08 00 00 00 00 80 3F C7 81 B8 08 00 00 00 00 80 3F C7 81 BC 08 00 00 00 00 80 3F C7 81
    void __fastcall Reset8B4();

    // 1.52 RVA: 0x1C492A0 / 29659808
    /// @pattern 48 8D 81 E0 08 00 00 C3
    void *__fastcall GetUnk8E0();

    // 1.52 RVA: 0x126CE00 / 19320320
    /// @pattern 48 8D 81 88 03 00 00 C3
    action::ActionInterface *__fastcall GetInterface();

    // 1.52 RVA: 0x72FE70 / 7536240
    /// @pattern 48 8B 81 B8 02 00 00 C3
    PhysicsData *__fastcall GetPhysicsData();

    // 1.52 RVA: 0x72FE80 / 7536256
    /// @pattern F2 0F 10 81 58 02 00 00 C3
    double __fastcall GetDeceleration();

    // 1.52 RVA: 0x1C5F7B0 / 29751216
    /// @pattern 48 8B C4 55 41 56 48 8D 68 98 48 81 EC 58 01 00 00 83 B9 4C 09 00 00 00 4C 8B F1 0F 84 00 04 00
    void __fastcall ProcessWeapons();

    // 1.52 RVA: 0x1C5F740 / 29751104
    /// @pattern 8B 91 50 02 00 00 F7 C2 EE FF FF FF 74 03 B0 01 C3 8B C2 C1 E8 04 A8 01 75 19 F6 C2 01 74 14 BA
    bool __fastcall CheckPhysicsStateActionInterface();

    // 1.52 RVA: 0x1C55E70 / 29711984
    /// @pattern 40 53 48 83 EC 30 48 8B D9 0F 29 74 24 20 48 8B 89 B0 02 00 00 0F 28 F1 48 85 C9 74 18 48 8B 01
    void __fastcall UpdatePhysicsSleepState(float deltaTime);

    // both process actions @ 0

    // 1.52 RVA: 0x1C55CF0 / 29711600
    // runs if physicsState != 0.0, runs physics->sub_30
    /// @pattern 48 89 5C 24 10 57 48 83 EC 40 33 C0 0F 29 74 24 30 48 89 81 54 02 00 00 49 8B F8 48 89 81 5C 02
    void __fastcall PreUpdatePreMovePhysicsStateNotZero( __int64 a2, float *deltaTime, __int64 a4);

    // 1.52 RVA: 0x1C559F0 / 29710832
    /// @pattern 48 89 74 24 18 57 48 83 EC 70 44 0F 29 4C 24 40 49 8B F0 44 0F 28 C9 48 8B F9 E8 01 FC FF FF 48
    __int64 __fastcall PreUpdatePreMovePhysicsStateZero(__int64 a2, __int64 a3, __int64 a4);

    // both process actions @ 1

    // 1.52 RVA: 0x1C54F90 / 29708176
    /// @pattern 48 89 5C 24 08 57 48 83 EC 50 0F 29 74 24 40 49 8B F8 0F 28 F1 48 8B D9 E8 03 FA FF FF 48 8B 03
    RED4ext::WorldTransform *__fastcall PostMovePhysicsStateNotZero(float deltaTime, float *a3);

    // 1.52 RVA: 0x1C54DA0 / 29707680
    // runs physics->sub_38, checks isOnGround, does something with airTime
    /// @pattern 40 57 48 83 EC 60 0F 29 74 24 50 48 8B F9 48 89 5C 24 78 0F 28 F1 49 8B D8 E8 F2 FB FF FF 48 8B
    RED4ext::WorldTransform *__fastcall PostMovePhysicsStateZero(float deltaTime, float *a3);

    // 1.52 RVA: 0x1C5D800 / 29743104
    // 1.6 RVA:  0x1C8A390 / 29926288
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 30 48 8D B1 88 03 00 00 48 8B FA 48 8B CE 48 8D 54 24
    inline action::ActionBase **__fastcall CreateAction(action::ActionBase **action_p, action::Type type) {
        RED4ext::RelocFunc<decltype(&BaseObject::CreateAction)> call(0x1C8A390);
        return call(this, action_p, type);
    }

    world::RuntimeSystemPhysics* physicsSystem;
    // resets when isOnGround, counts up otherwise
    float airTimer;
    bool isOnGround;
    uint8_t unk24D[3];
    PhysicsState physicsState;
    float acceleration;
    float deceleration;
    float handbrake;
    float strafeY;
    float strafeX;
    float turnInput;
    float leanFB;
    float rockFB;
    uint8_t shootPrimary;
    uint8_t shootSecondary;
    uint8_t shootTertiary;
    uint8_t vehicleCameraInverse;
    float cameraX;
    float cameraY;
    float cameraMouseX;
    float cameraMouseY;
    uint8_t cycleLights;
    uint8_t horn;
    uint8_t unk28A;
    uint8_t unk28B;
    float unk28C;
    float unk290;
    float unk294;
    float unk298;
    float unk29C;
    float unk2A0;
    float unk2A4;
    float unk2A8;
    float unk2AC;
    Physics* physics;             // 2B0
    PhysicsData* physicsData; // 2B8
    Handle<void> curveSetData;
    Handle<ChassisComponent> chassis;
    float unk2E0[16];
    uint64_t chassisType;
    uint64_t unk328;
    WorldTransform worldTransform;
    Vector3 unk350;
    float unk35C;
    uint8_t unk360;
    uint8_t unk361;
    uint8_t unk362;
    uint8_t unk363;
    float unk364;
    Unk368 *unk368;
    CName unk370;
    Handle<move::Component> moveComponent;
    action::ActionInterface actionInterface; // 388
    Handle<void> baseDrivingParams[4];
    Handle<game::interactions::Component> interactionsComponent;
    Handle<game::interactions::Component> passengerInteractions;
    Handle<Controller> vehicleController;
    Handle<PersistentDataPS> PersistentDataPS;
    Handle<CameraManager> cameraManager;
    game::VehicleSystem* vehicleSystem;
    Handle<game::IBlackboard> blackboard;
    Handle<void> blackboard2;
    Handle<void> controllerMaybe;
    uint64_t unk540;
    Handle<game::Puppet> drivingPuppet;
    Handle<game::Puppet> mountedPuppet;
    Unk568* unk568;
    Unk570* unk570;
    AirControl* airControl; // 578
    Unk580* unk580;
    Unk588* unk588;
    void* unk590;
    void* destructionParams;
    void* unk5A0;
    void* unk5A8;
    float turnX;
    float turnXRelated2;
    float turnXRelated;
    float deltaTurnX;
    Handle<game::OccupantSlotComponent> occupantSlotComponent;
    uint64_t unkTweakRecord;
    Handle<game::data::Vehicle_Record> vehicleRecord;
    float unk5E8;
    float unk5EC;
    float unk5F0;
    float unk5F4;
    float unk5F8;
    uint8_t permanantStun2;
    // gravity related
    uint8_t unk5FD;
    uint16_t permanantStun1;
    float unk600;
    uint8_t unk604;
    uint8_t unk605;
    uint8_t unk606;
    uint8_t unk607;
    // timer that counts down to zero (min value)
    float unk608;
    // added to on collision
    int32_t unk60C;
    uint8_t important;
    uint8_t ignoreImpulses;
    uint8_t unk612;
    uint8_t unk613;
    uint8_t unk614;
    // was summoned maybe?
    uint8_t unk615;
    uint8_t highPriorityDriving;
    uint8_t unk617;
    DynArray<void*> uiComponents;
    Matrix unk628;
    Matrix unk668;
    float unk6A8[18];
    uint64_t unk6F0[2];
    float max_tolerance_radius;
    float acc_pid_p;
    float acc_pid_i;
    float acc_pid_d;
    uint64_t unk710[10];
    AutonomousData autonomousData;
    uint8_t hasDestructionParams;
    uint8_t unk8B1;
    uint8_t unk8B2;
    uint8_t unk8B3;
    float unk8B4[5];
    DynArray<void*> unk8C8;
    uint64_t unk8D8[2];
    Vector3 unk8E8;
    float unk8F4;
    DynArray<Handle<ent::Entity>> projectiles;
    uint8_t updatingProjectiles;
    uint8_t unk909;
    uint8_t unk90A;
    uint8_t unk90B;
    float unk90C;
    uint32_t unk910[8];
    uint8_t meleeHonkDelay[3];
    uint8_t meleeHonkDuration[3];
    uint8_t collisionHonkDelay[3];
    uint8_t collisionHonkDuration[3];
    uint8_t collisionHonkUpperThreshold[3];
    uint8_t unk93F;
    DynArray<Weapon> weapons;
    Vector3 tracePosition;
    uint8_t unk95C;
    uint8_t unk95D;
    uint8_t unk95E;
    uint8_t unk95F;
    uint64_t unk960;
    DynArray<void*> puppets;
    uint64_t unk978;
};
#pragma pack(pop)
RED4EXT_ASSERT_SIZE(BaseObject, 0x980);
RED4EXT_ASSERT_OFFSET(BaseObject, weapons, 0x940);
//char (*__kaboom)[sizeof(BaseObject)] = 1;
//char (*__kaboom2)[offsetof(BaseObject, unk7E0)] = 1;
} // namespace vehicle
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
