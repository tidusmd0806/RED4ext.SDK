#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/vehiclePhysicsInsert1.hpp>
#include <RED4ext/Scripting/Natives/vehiclePhysicsInsert2.hpp>
// #include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>
#include <RED4ext/Scripting/Natives/vehiclePID.hpp>
#include <RED4ext/Scripting/Natives/vehiclePhysicsData.hpp>
#include <RED4ext/Scripting/Natives/vehicleWaterParams.hpp>

namespace RED4ext
{

namespace anim
{
struct AnimFeature_VehiclePassenger;
}

namespace vehicle
{
struct BaseObject;
struct WheeledBaseObject;
struct CarBaseObject;
struct BikeBaseObject;

// now at 0xD0
struct UnkC8 {
  uint32_t unk00;
  Vector3 unk04;
  Vector4 linearVelocity;
  Vector4 angularVelocity;
  // some sort of timeDelta
  float unk30;
  float unk34;
  float unk38;
  float unk3C;
  WorldTransform unk40;
  // another timeDelta
  float unk60;
  // another timeDelta
  float unk64;
  // used in force calculation
  float unk68;
  float unk6C;
};
RED4EXT_ASSERT_SIZE(UnkC8, 0x70);

#pragma pack(push, 1)
struct Physics
{
    // after "VehicleTeleportationIfFallsUnderWorld" string
    // 1.6  RVA: 0x3497B78
    // 1.61 RVA: 0x349CDC8
    // 1.61hf1 RVA: 0x349FF08
    /// @pattern 56 65 68 69 63 6C 65 54 65 6C 65 70 6F 72 74 61 74 69 6F 6E 49 66 46 61 6C 6C 73 55 6E 64 65 72
    /// @offset -40

    // 2.1 RVA: 0x2AA4290
    /// @pattern 40 53 48 83 EC 20 48 8B D9 48 8D 05 (fn:rel) 48 89 01 33 C9 B8 00 00 80 3F 88 4B 50 48 89 4B
    /// @eval fn
    static constexpr const uintptr_t VFT = vehiclePhysics_VFT_Addr;

    virtual ~Physics();
    virtual uint64_t SetVehicle(vehicle::BaseObject *);
    virtual uint64_t sub_10();
    virtual uint64_t sub_18();
    // sets mass & inertia tensor
    virtual uint64_t sub_20();
    virtual uint64_t UpdateTransform();
    virtual void sub_30(uint32_t *, float*);
    // checks for vehicle being Z < -100, teleports if so (VehicleTeleportationIfFallsUnderWorld @ RVA 0x4781A38)
    virtual void sub_38(float deltaTime);
    virtual void sub_40(float deltaTime);
    virtual uint64_t FixedUpdate_PreSolve(uint64_t, float);
    // also called w/o arg?
    // sets this->velocity from physicsData->velocity
    // applies water resistance
    virtual void sub_50(float deltaTime);
    virtual uint64_t sub_58(float deltaTime);
    // empty
    virtual void sub_60();
    virtual uint64_t sub_68(float);
    virtual uint64_t sub_70(int, char);
    virtual uint64_t UpdatePhysicsWT2();
    // empty
    virtual void sub_80();
    // empty
    virtual void sub_88();
    virtual void SetUnk70To1();
    // empty
    virtual void sub_98(bool);
    // empty
    virtual uint64_t sub_A0(uint64_t);
    virtual uint64_t IntializeVectorQuaternion(uint64_t);
    virtual uint64_t sub_B0(int, float);
    virtual bool UpdatePhysicsStuff();
    virtual bool IsInAirFromVehicle();
    virtual bool SomethingOrientationIsInAir();
    // return 0
    virtual bool sub_D0();
    virtual void sub_D8(char);
    virtual double Return1D();
    virtual float Return1F();
    // empty
    virtual void sub_F0();
    // empty
    virtual void sub_F8();
    // empty
    virtual void sub_100(uint32_t*, float*);
    // empty
    virtual void sub_108();
    // empty
    virtual void sub_110();
    // empty
    virtual void sub_118(void *, RED4ext::Transform *);
    // updates some animation stuff, sub_120
    virtual uint64_t UpdateWheelAnimations();
    // update blackboard, effectdata
    virtual uint64_t UpdateBlackboard();
    virtual void sub_130();
    virtual uint64_t sub_138();
    // populates some variables along with most of insert1
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record> *);

    // 1.52 RVA: 0x1CEB5B0 / 30324144
    /// @pattern 80 79 50 00 75 03 32 C0 C3 F2 0F 10 41 30 F2 0F 11 02 8B 41 38 89 42 08 B0 01 0F 10 41 40 0F 11
    bool __fastcall ReadWorldTransform(WorldTransform *a2);

    // 1.52 RVA: 0x1CEB370 / 30323568
    /// @pattern 48 89 5C 24 20 55 41 56 41 57 48 8D 6C 24 B9 48 81 EC B0 00 00 00 4C 8B F1 41 0F B6 D8 48 8B 49
    void __fastcall UpdateDataWorldTransform(WorldTransform * a2, bool updateChassis);

    // 1.52 RVA: 0x1CEB5E0 / 30324192
    /// @pattern 48 8B 49 60 E9 87 48 A4 FE
    // PhysicsData *__fastcall GetPhysicsData();

    // 1.52 RVA: 0x1CEB920 / 30325024
    /// @pattern 48 8B 41 68 F3 0F 10 40 10 0F 2F 40 20 0F 96 C0 C3
    bool __fastcall GetSomethingWaterParams();

    // 1.52 RVA: 0x1CEB940 / 30325056
    /// @pattern 48 83 EC 28 48 8B 49 60 E8 23 45 A4 FE 48 8B C8 48 83 C4 28 E9 F7 5B FF FF
    // bool __fastcall UsesAlternativeChassisMass();

    // 1.52 RVA: 0x1CEBAE0 / 30325472
    /// @pattern F6 C2 01 74 3B 53 48 83 EC 40 48 8B D9 48 8D 54 24 20 48 8B 49 60 E8 35 A7 34 FF F2 0F 10 00 F2
    // void __fastcall UpdateWorldTransform2FromParent(bool a2);

    // 1.52 RVA: 0x1CEC3F0 / 30327792
    /// @pattern 48 89 5C 24 10 48 89 6C 24 20 56 57 41 56 48 83 EC 20 48 8B 01 4C 8B F1 FF 90 40 01 00 00 48 8D
    double __fastcall LoadHasBeenFlippedOver(Handle<game::data::VehicleDriveModelData_Record> *a2);

    // 1.52 RVA: 0x1CEC520 / 30328096
    /// @pattern C7 81 A0 00 00 00 00 00 80 3F C3
    void __fastcall SetUnkA0ToOne();

    // 1.52 RVA: 0x1CEC530 / 30328112
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 48 8B F9 48 8B DA 48 8B 49 60 E8 27 39 A4 FE 48 8B C8 48 8B D3 E8
    // void __fastcall ResetWithWorldTransform(WorldTransform *worldTransform);

    // 1.52 RVA: 0x1CEC5E0 / 30328288
    /// @pattern 48 83 EC 28 48 8B 49 60 84 D2 74 19 E8 7F 38 A4 FE F3 0F 10 0D DF 0F 3D 01 48 8B C8 48 83 C4 28
    // __int64 __fastcall SetUsesAlternativeChassisMass(bool uses);

    // 1.52 RVA: 0x1CED2A0 / 30331552
    /// @pattern 40 53 48 81 EC 80 00 00 00 4C 8B 41 60 0F 57 C0 F3 0F 7F 44 24 20 48 8B D9 44 0F 29 44 24 50 44
    void __fastcall ComputeSleep(float deltaTime);

    // 1.52 RVA: 0x368A20 / 3574304
    /// @pattern 48 8B 41 60 C3
    BaseObject *__fastcall GetVehicle();

    // 1.6 RVA: 0x1D3FC50 / 30669904
    /// @pattern 40 53 48 83 EC 20 48 8B 01 48 8B D9 FF 90 D0 00 00 00 48 8B CB 84 C0 74 25 E8 62 FA FF FF 85 C0
    bool __fastcall IsInAirFromVehicle_func();

    uint64_t unk08;
    Vector3 velocity; // 10
    uint32_t unk1C;
    uint8_t unk20; // checked in fixed update
    uint8_t unk21[7];
    uint64_t unk28;
    WorldTransform worldTransform; // 30
    uint8_t unk50;
    uint8_t unk51[7];
    uint64_t unk58;
    BaseObject* parent;
    WaterParams* waterParams;
    uint8_t unk70;
    uint8_t unk71[7];
    uint64_t unk78;
    WorldTransform worldTransform2; // 80
    // Set to 1.0 when awake, counts down when sleep conditions are met - when 0.0, vehicle enters sleep state, and is set to -1.0
    float sleepTimer;
    uint32_t unk_2_0_new_0;
    // counts from 0.5 down to 0.0
    float unkA4;
    float setTo0point5;
    /*
    B0 in 2.0
    HIWORD(this) compared to physicsProxyManager->unk102010[this]
    0x00011a70 on ground, 
    0x00011a84 in air, 
    0xffffffff in water, 
    0x00012d45 above water
    0x00013404 sliding
    0x00013f53 hitting ground
    0x00014aa8 upsidedown over ground
    0x00014659
    0x00014aad
    0x00014a9d
    */
    int32_t unkAC;
    float unkB0;
    // computed from chassis component
    bool isMoving;
    uint8_t unk_2_0_new_1;
    uint8_t unkB5;
    // is player controllered maybe
    bool unkB6;
    // set from vehicle->unk361
    uint8_t unkB7;
    // true if any vehicle->acceleration, et al != 0
    bool hasInput;
    // true if any vehicle->unk568->unk60 value != 0 - isMoving?
    bool unkB9;
    uint8_t unkBA;
    uint8_t unkBB;
    uint16_t unkBC;
    uint8_t unkBE;
    float has_been_flipped_over_for_some_time_delay;
    float unkC4;
    UnkC8* physicsBaseStruct2;  // D0
};
//char (*__kaboom)[sizeof(Physics)] = 1;
//char (*__kaboom2)[offsetof(Physics, unk08)] = 1;

struct UnkD10 {

    // 1.6 RVA: 0x1D3E8E0 / 30664928
    /// @pattern 85 D2 0F 84 C2 01 00 00 48 8B C4 48 89 70 18 57 48 83 EC 70 48 89 58 08 8B FA 48 89 68 10 48 8B

    // post 2.0
    /// @pattern 85 D2 0F 84 88 00 00 00 48 83 EC 38 0F 29 74 24 20 44 8B CA 0F 57 F6 4C 8B D1 45 33 DB 4D 8B C2
    void __fastcall Reset(int numWheels);

    struct Wheel {
        // uint8_t unk00[32];
        // RED4ext::Vector3 unk20;
        // uint8_t unk2C[96];
        // RED4ext::Vector3 unk8C;
        // RED4ext::CName physMaterial;
        // uint8_t unkA0[52];
        // uint8_t unkD4;
        // uint8_t unkD5[3099];
        // bool unkCF0;
        // bool unkCF1;
        // uint8_t unkCF2[2];
        // float unkCF4;
        // float unkCF8;
        // float relatedToAir;

        // location of wheel
        RED4ext::Transform unk00;
        RED4ext::Vector3 unk20;
        float unk2C[21];
        // related to insert2->unk150
        RED4ext::Vector3 unk80;
        RED4ext::Vector3 unk8C;
        RED4ext::CName physMaterial;
        // location of raytrace below wheel?
        RED4ext::Transform unkA0;
        uint32_t unkC0[2];
        // related to physics->unkCD0
        int32_t unkC8;
        uint32_t unkCC[2];
        float unkD4;
        uint32_t unkD8;
        uint32_t unkDC;
        struct UnkE0 {
            uint8_t unk00[96];
        } unkE0[2];
        uint8_t unk1A0[2880];
        uint32_t numE0;
        uint8_t unkCE4[12];
        bool unkCF0;
        bool unkCF1;
        uint8_t unkCF2;
        uint8_t unkCF3;
        float unkCF4;
        float unkCF8;
        float relatedToAir;
    } wheel[4];
    uint32_t numWheels;
};
RED4EXT_ASSERT_SIZE(UnkD10, 0x3410);

struct WheeledPhysics : Physics 
{
    // after "EnableSmoothWheelContacts" string
    // 1.6  RVA: 0x3498388
    // 1.61 RVA: 0x349D5D8
    // 1.61hf1 RVA: 0x34A0718
    /// @pattern 45 6E 61 62 6C 65 53 6D 6F 6F 74 68 57 68 65 65 6C 43 6F 6E 74 61 63 74 73 00 00 00 00 00 00 00
    /// @offset -32

    // 2.0 RVA: 0x2AA40E0
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 8B FA 48 8B D9 E8 ? ? ? ? 33 F6 48 8D 05 (fn:rel)
    /// @eval fn
    static constexpr const uintptr_t VFT = vehicleWheeledPhysics_VFT_Addr;

    // 1.52 RVA: 0x1D0DB70 / 30464880
    /// @pattern 40 56 41 56 48 83 EC 38 48 89 5C 24 58 4C 8B F1 48 89 7C 24 68 4C 89 7C 24 30 8B F2 E8 1F C9 FD
    // WheeledPhysics(unsigned int wheels);
    
    // 1.52 RVA: 0x1D12E00 / 30486016
    /// @pattern 40 53 48 83 EC 40 45 33 C0 0F 29 74 24 30 48 8B D9 0F 29 7C 24 20 0F 57 FF 44 39 81 C0 05 00 00
    float __fastcall GetEnergy();

    // 1.52 RVA: 0x1D12F70 / 30486384
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 8B 81 90 0B 00 00 48 8D 99 D0 05 00 00 48 69 F8 70
    __int64 __fastcall GetNumberOfWheelsTouchingGround();

    // 1.52 RVA: 0x1D18D30 / 30510384
    // called from vehicleWheeledPhysics_sub_38
    /// @pattern 48 8B C4 55 53 56 57 41 54 41 56 48 8D 6C 24 88 48 81 EC 78 01 00 00 80 79 20 00 48 8B F1 44 8B
    void __fastcall SomethingWheels(float a2);

    // 1.52 RVA: 0x1D0E8D0 / 30468304
    /// @pattern 40 53 48 81 EC A0 00 00 00 44 0F B6 D2 4C 8D 89 D0 05 00 00 41 0F B6 C0 48 8B D9 4D 69 C2 30 01
    void __fastcall FourWheelTorque(unsigned __int8 rearWheelIndex, unsigned __int8 frontWheelIndex, float a4, RED4ext::Transform *transform);

    // 1.6 RVA: 0x1D450D0 / 30691536
    /// @pattern 48 8B C4 53 41 54 41 56 48 83 EC 60 48 89 68 10 48 8D 99 D0 05 00 00 48 89 70 18 45 33 E4 48 89
    void __fastcall Update();

    // 1.52 RVA: 0x1D11A50 / 30480976
    /// @pattern 48 8B C4 48 89 58 08 48 89 70 10 57 48 81 EC C0 00 00 00 0F 29 70 E8 48 8B F1 48 8B 89 F8 00 00
    void __fastcall UpdatePassengerAnim(anim::AnimFeature_VehiclePassenger *);
    
    // 1.6 RVA: 0x1D194B0 / 30512304
    /// @pattern 84 D2 74 27 C6 81 B4 00 00 00 01 C7 81 AC 00 00 00 FF FF FF FF C7 81 B0 00 00 00 00 00 00 00 48
    __int64 __fastcall SetIsMovingOthers(bool a2);

    // 1.6 RVA: 0x1D19890 / 30513296
    /// @pattern 48 89 5C 24 10 57 48 81 EC 90 00 00 00 48 8B 41 60 48 8B F9 48 8B 98 C0 00 00 00 E8 E0 30 E1 FF
    // RED4ext::WorldTransform *__fastcall CheckBoundarySystem();

    // 1.6 RVA: 0x1D44670 / 30688880
    /// @pattern 48 8B C4 55 41 54 41 57 48 8D A8 F8 FE FF FF 48 81 EC F0 01 00 00 44 0F 29 48 88 4C 8B E1 48 89
    void __fastcall TurningRollFactorStuff(float timeDelta);

    // 1.6 RVA: 0x1D44270 / 30687856
    /// @pattern 40 56 57 48 81 EC D8 00 00 00 8B B9 C0 05 00 00 48 8B F1 44 0F 29 84 24 90 00 00 00 44 0F 28 C1
    void __fastcall SetupInsert();

    // 1.6 RVA: 0x1D3FCA0 / 30669984
    // checks EnableSmoothWheelContacts too
    /// @pattern 80 3D 11 67 B0 02 00 74 0F 0F 57 C0 0F 2F 81 10 0C 00 00 73 03 B0 01 C3 32 C0 C3
    // bool __fastcall CheckSmoothWheelContactDecreaseTime();

    // 1.6 RVA: 0x1D3C3E0 / 30655456
    /// @pattern 48 8B C4 48 89 58 10 48 89 68 18 56 41 56 41 57 48 81 EC B0 00 00 00 8B A9 C0 05 00 00 4C 8D B9
    float *__fastcall FourWheelTorqueStuff(float timeDelta);

    // 1.52 RVA: 0x1D12040 / 30482496
    // 1.6  RVA: 0x1D3E7A0 / 30664608
    // 1.61hf1 RVA: 0x1D3F260
    /// @pattern 48 89 5C 24 10 57 48 83 EC 30 48 8B F9 41 0F B6 49 32 E8 ? ? ? 00 48 8B 4F 08 80 B9 B4 00 00
    static void __fastcall FixedUpdate(__int64, __int64, __int64, __int64);

    // 1.6 RVA: 0x1D3F2E0 / 30667488
    /// @pattern 40 56 48 83 EC 30 8B B1 C0 05 00 00 0F 29 74 24 20 0F 57 F6 85 F6 74 3B 48 89 5C 24 40 48 8D 99
    float __fastcall Unk15CStuff();

    // 1.6 RVA: 0x1D57350 / 30765904
    /// @pattern 48 8B C4 55 41 56 48 8D A8 08 F8 FF FF 48 81 EC E8 08 00 00 4C 8B 01 48 89 58 10 48 8B D9 48 89
    static double __fastcall ApplyWaterResistance(void * waterParams, float timeDelta);

    // 1.6  RVA: 0x1D16ED0 / 30502608
    // 1.61hf1 RVA: 0x1D17990 / 30505360
    /// @pattern 40 53 48 83 EC 30 48 8B D9 0F 29 74 24 20 48 8B 49 60 0F 28 F1 E8 ? ? F6 FF 84 C0 74 45 48 8B
    void __fastcall ProcessAirControl(float timeDelta);

    // 1.6  RVA: 0x1D408B0 / 30673072
    // 1.61hf1 RVA: 0x1D41370 / 30675824
    /// @pattern 89 54 24 10 55 57 41 57 48 8D AC 24 D0 EF FF FF B8 30 11 00 00 E8 ? ? ? 00 48 2B E0 80 79 20
    void __fastcall SomethingWheelRayTrace(unsigned int wheelIndex_1);

// overrides

    virtual ~WheeledPhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;
    // virtual uint64_t sub_10() override;
    virtual uint64_t sub_18() override;
    virtual uint64_t sub_20() override;
    // virtual uint64_t UpdateTransform() override;
    // virtual void sub_30(uint32_t *, float*) override;
    virtual void sub_38(float deltaTime) override;
    // virtual void sub_40(float deltaTime) override;
    virtual uint64_t FixedUpdate_PreSolve(uint64_t, float) override;
    virtual void sub_50(float deltaTime) override;
    virtual uint64_t sub_58(float deltaTime) override;
    virtual void sub_60() override;
    // virtual uint64_t sub_68(float) override;
    virtual uint64_t sub_70(int, char) override;
    // virtual uint64_t UpdatePhysicsWT2() override;
    // virtual void sub_80() override;
    // virtual void sub_88() override;
    // virtual void SetUnk70To1() override;
    // virtual void sub_98(bool) override;
    // virtual uint64_t sub_A0(uint64_t) override;
    // virtual uint64_t IntializeVectorQuaternion(uint64_t) override;
    virtual uint64_t sub_B0(int, float) override;
    // references proxyID
    virtual bool UpdatePhysicsStuff() override;
    virtual bool IsInAirFromVehicle() override;
    // virtual bool SomethingOrientationIsInAir() override;
    // get unk20
    virtual bool sub_D0() override;
    // calcs unk20
    virtual void sub_D8(char) override;
    // get turn rate
    virtual double Return1D() override;
    // get max wheel turn deg
    virtual float Return1F() override;
    // virtual void sub_F0() override;
    virtual void sub_F8() override;
    virtual void sub_100(uint32_t*, float*) override;
    virtual void sub_108() override;
    // virtual void sub_110() override;
    // virtual void sub_118() override;
    virtual uint64_t UpdateWheelAnimations() override;
    // virtual uint64_t UpdateBlackboard() override;
    virtual void sub_130() override;
    virtual uint64_t sub_138() override;
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record>*) override;

// new virtuals

    // returns 0
    virtual bool sub_148(uint64_t);
    // returns 0
    virtual bool sub_150(uint64_t);
    virtual float GetWheelLatSlip(float multiplier, uint32_t wheelIndex);
    virtual float GetWheelLongSlip(float multiplier, uint32_t wheelIndex);
    // returns 0 here, is index 1 or 2 for car, 0 for bike - isRIght?
    virtual bool isRightWheel(uint64_t wheel_index);
    // returns 0 here, is index 2 or 3 for car, is index 1 - isBack?
    virtual bool isBackWheel(uint64_t wheel_index);
    // empty
    virtual void UpdateTilt(float deltaTime);
    virtual void VehiclePhysicsUpdate(float deltaTime);
    virtual void UpdateTurn(float deltaTime);
    // throw error
    virtual void UpdateSuspensionAnimation();
    virtual void UpdateVehicleLinearVelocityStuff(float deltaTime);
    virtual void UpdateVehRotW(float deltaTime);
    // returns 1f
    virtual void sub_1A8(uint32_t);

    // or maybe type?
    uint32_t numDriveWheels;
    float frontBackWheelDistance;
    float unkD8;
    float unkDC;
    float frontBackBias;
    float turnRate;
    uint32_t unkE8;
    uint32_t unkEC;
    float wheelTurningThing;
    uint8_t unkF4;
    uint8_t unkF5;
    uint8_t unkF6;
    uint8_t unkF7;
    WheeledBaseObject* wheeledObject;
    physics::VehiclePhysicsInsert1 insert1[4];
    uint32_t insert1Count;
    uint32_t unk5C4[3];
    physics::VehiclePhysicsInsert2 insert2[4];
    uint8_t insert2Count;
    uint8_t unkB91;
    uint8_t unkB92;
    uint8_t unkB93;
    uint32_t unkB94[3];
    float unkBA0; // timer of some sort, stuff in SomeFixedUpdate
    float unkBA4; // if not equal to unkBA8, add (diff * timeDelta * 4)
    float unkBA8;
    float antiSwaybarDampingScalor;
    float turningRollFactor;
    float turningRollFactorWeakContactMul;
    float turningRollFactorWeakContactThresholdMin;
    float turningRollFactorWeakContactThresholdMax;
    float maxWheelTurnDeg;
    float wheelTurnMaxAddPerSecond;
    float wheelTurnMaxSubPerSecond;
    uint8_t useAlternativeTurnUpdate;
    uint8_t unkBCD;
    uint8_t unkBCE;
    uint8_t unkBCF;
    float turnUpdateBaseSpeedThreshold;
    float turnUpdateMaxSpeedThreshold;
    float turnUpdateMaxSpeedTurnChangeMul;
    float turnUpdateMaxSpeedTurnMul;
    float turnUpdateInputDiffForSlowChange;
    float turnUpdateInputDiffForFastChange;
    float turnUpdateInputFastChangeSpeed;
    float turnUpdateInputSlowChangeSpeed;
    float turnUpdateInputDiffProgressionPow;
    float airResistanceFactor;
    float brakingFrictionFactor;
    float lowVelStoppingDeceleration;
    float handbrakeBrakingTorque;
    float forwardWeightTransferFactor;
    float sideWeightTransferFactor;
    float smoothWheelContactIncreseTime;
    float smoothWheelContactDecreseTime;
    uint32_t wheelsFrictionMap;
    uint32_t unkC18;
    float slipAngleCurveScale;
    float slipAngleMinSpeedThreshold;
    float slipRatioCurveScale;
    float slipRatioMinSpeedThreshold;
    float slopeTractionReductionBegin;
    float slopeTractionReductionMax;
    float slopeTractionReductionFactor;
    float unkC38;
    uint8_t unkC3C;
    uint8_t unkC3D;
    uint8_t unkC3E;
    uint8_t unkC3F;
    float unkC40;
    float unkC44;
    float unkC48;
    float unkC4C;
    // VelocitySmoothingTime - PIDs?
    Matrix unkC50;
    Matrix unkC90;
    uint32_t unkCD0[4];
    uint32_t wheelsNeedUpdate;
    uint32_t unkCE4;
    DynArray<uintptr_t> driveHelpers;
    Handle<void> curveSet;
    uint64_t stuckTimeout;
    uint64_t unk_2_0_new_0[4];
    UnkD10* unkD10; // D90
    uint64_t unkD18; // D98
};
#pragma pack(pop)
// RED4EXT_ASSERT_OFFSET(WheeledPhysics, driveHelpers, 0xCE8);
RED4EXT_ASSERT_SIZE(WheeledPhysics, 0xDA0);
// RED4EXT_ASSERT_SIZE(WheeledPhysics, 0xD20);
//char (*__kaboom)[offsetof(WheeledPhysics, unkC40)] = 1;

struct CarPhysics : WheeledPhysics
{
    // pre 2.0
    // a little after "VehiclePassenger" string
    // 1.6  RVA: 0x34980C0
    // 1.61 RVA: 0x349D310
    // 1.61hf1 RVA: 0x34A0450
    /// @pattern 56 65 68 69 63 6C 65 50 61 73 73 65 6E 67 65 72 00 00 00 00 3B DF 7F 3F 00 00 C8 C1 00 00 00 00
    /// @offset -48

    // post 2.0
    /// @pattern 40 53 48 83 EC 20 BA 04 00 00 00 48 8B D9 E8 ? ? ? ? 33 D2 48 8D 05 (fn:rel) 48 89 03 48
    /// @eval fn
    // static constexpr const uintptr_t VFT = vehicleCarPhysics_VFT_Addr;

// overrides

    virtual ~CarPhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;
    // virtual uint64_t sub_10() override;
    // virtual uint64_t sub_18() override;
    // virtual uint64_t sub_20() override;
    // virtual uint64_t UpdateTransform() override;
    virtual void sub_30(uint32_t *, float*) override;
    // animation update
    virtual void sub_38(float deltaTime) override;
    // animation update
    virtual void sub_40(float deltaTime) override;
    // virtual uint64_t FixedUpdate_PreSolve(uint64_t, float) override;
    // virtual void sub_50(float deltaTime) override;
    // virtual uint64_t sub_58(float deltaTime) override;
    // virtual void sub_60() override;
    virtual uint64_t sub_68(float) override;
    // virtual uint64_t sub_70(int, char) override;
    virtual uint64_t UpdatePhysicsWT2() override;
    virtual void sub_80() override;
    // virtual void sub_88() override;
    // set is car
    virtual void SetUnk70To1() override;
    virtual void sub_98(bool) override;
    virtual uint64_t sub_A0(uint64_t) override;
    // virtual uint64_t IntializeVectorQuaternion(uint64_t) override;
    // virtual uint64_t sub_B0(int, float) override;
    // virtual bool UpdatePhysicsStuff() override;
    // virtual bool IsInAirFromVehicle() override;
    // virtual bool SomethingOrientationIsInAir() override;
    // virtual void sub_D0() override;
    // virtual void sub_D8(char) override;
    // virtual double Return1D() override;
    // virtual float Return1F() override;
    // virtual void sub_F0() override;
    // virtual void sub_F8() override;
    // virtual void sub_100(uint32_t*, float*) override;
    // virtual void sub_108() override;
    // virtual void sub_110() override;
    // virtual void sub_118() override;
    virtual uint64_t UpdateWheelAnimations() override;
    virtual uint64_t UpdateBlackboard() override;
    // virtual void sub_130() override;
    // virtual uint64_t sub_138() override;
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record>*) override;
    virtual bool sub_148(uint64_t) override;
    virtual bool sub_150(uint64_t) override;
    virtual float GetWheelLatSlip(float multiplier, uint32_t wheelIndex) override;
    // virtual float GetWheelLongSlip(float multiplier, uint32_t wheelIndex) override;
    // is rear wheel maybe
    virtual bool isRightWheel(uint64_t) override;
    // also rear wheel maybe
    virtual bool isBackWheel(uint64_t) override;
    // virtual void UpdateTilt(float deltaTime) override;
    virtual void VehiclePhysicsUpdate(float deltaTime) override;
    // update steering
    virtual void UpdateTurn(float deltaTime) override;
    // update wheel blackbords
    virtual void UpdateSuspensionAnimation() override;
    // virtual void UpdateVehicleLinearVelocityStuff(float deltaTime) override;
    // virtual void UpdateVehRotW(float deltaTime) override;
    // get insert pointers
    virtual void sub_1A8(uint32_t) override;

    // 1.52 RVA: 0x1D09090 / 30445712
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 BA 04 00 00 00 48 8B D9 E8 C9 4A 00 00 48 8D 05 62 8B 72 01 33 FF
    // CarPhysics();

    // 1.52 RVA: 0x1D0C290 / 30458512
    /// @pattern 48 89 5C 24 18 56 48 81 EC D0 00 00 00 48 8B F1 0F 29 B4 24 C0 00 00 00 48 8B 89 20 0D 00 00 BA

    // post 2.0
    /// @pattern 48 8B C4 48 89 58 10 57 48 81 EC B0 00 00 00 0F 29 70 E8 48 8B F9 48 8B 89 A0 0D 00 00 0F 29 78
    int64_t __fastcall AnimationUpdate(float);

    CarBaseObject* carObject; // DA0
    PID bankBodyFBPID; // DA8
    PID bankBodyLRPID;
    float bankBodyFBTanMultiplier;
    float bankBodyLRTanMultiplier;
    float differentialOvershootFactor;
    float perfectSteeringFactor;
    float affectsTurnX;
    float affectsTurnX_asWell;
    float veh_curr_turn_rate;
    float veh_curr_turn_input;
    float veh_bank_body_f_b;
    float veh_bank_body_l_r;
    float latPeriodSquared;
    float latPeriodTimesDampingSquared;
    float unkD98[3];
    float longPeriodSquared;
    float longPeriodTimesDampingSquared;
    float unkDAC[5];
    WorldTransform wt1;
    WorldTransform wt2;
    WorldTransform wt3;
    WorldTransform wt4;
    Quaternion unkE40;
    Quaternion unkE50;
    float unkE60_V568_E8;
    float unkE64;
    float unkE68;
    float unkE6C;
    uint8_t unkE70;
    uint8_t unkE71;
    uint8_t unkE72;
    uint8_t unkE73;
    uint8_t positionNeedsUpdate;
    uint8_t unkE75[3];
    uint64_t unkF00;
    uint64_t unkF08;
};
// RED4EXT_ASSERT_OFFSET(CarPhysics, unkE78, 0xE78);
RED4EXT_ASSERT_SIZE(CarPhysics, 0xF10);

struct BikePhysics : WheeledPhysics
{
    // a little after "BikeHackTiltCalcValue" string
    // 1.6  RVA: 0x3431A30
    // 1.61 RVA: 0x349D130
    // 1.61hf1 RVA: 0x34A0270
    /// @pattern 42 69 6B 65 48 61 63 6B 54 69 6C 74 43 61 6C 63 56 61 6C 75 65 00 00 00
    /// @offset -30

    // post 2.0
    /// @pattern 40 53 48 83 EC 20 BA 02 00 00 00 48 8B D9 E8 ? ? ? ? 33 C9 C6 83 E0 0D 00 00 01 48 8D 05 (fn:rel)
    /// @eval fn
    static constexpr const uintptr_t VFT = vehicleBikePhysics_VFT_Addr;

    virtual ~BikePhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;
    virtual void sub_30(uint32_t *, float*) override;
    virtual void sub_118(void *, RED4ext::Transform *) override;
    virtual uint64_t UpdateWheelAnimations() override;
    virtual uint64_t UpdateBlackboard() override;
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record>*) override;
    virtual float GetWheelLatSlip(float multiplier, uint32_t wheelIndex) override;
    virtual bool isBackWheel(uint64_t) override;
    virtual void UpdateTilt(float deltaTime) override;
    virtual void UpdateTurn(float deltaTime) override;
    virtual void UpdateSuspensionAnimation() override;

    // 1.52 RVA: 0x1D04210 / 30425616
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 BA 02 00 00 00 48 8B D9 E8 49 99 00 00 33 FF 48 8D 05 00 D8 72 01
    // BikePhysics();

    // 1.52 RVA: 0x1D06B00 / 30436096
    // 1.61 RVA: 0x1D33630
    // static constexpr const uintptr_t AnimationUpdateAddr = 0x1D33630;
    /// @pattern 48 89 5C 24 10 57 48 83 EC 40 48 8B 81 20 0D 00 00 48 8B D9 F3 0F 10 81 E4 00 00 00 0F 57 05

    // 2.0
    /// @pattern 48 89 5C 24 10 57 48 83 EC 40 48 8B 81 A0 0D 00 00 48 8B D9 F3 0F 10 81 F4 00 00 00 0F 57 05 99
    __int64 __fastcall AnimationUpdate();

    BikeBaseObject* bikeObject;
    Handle<void> callbackRelated;
    PID tiltPID;
    float negTurnRate;
    float turnInput;
    bool tiltControlEnabled;
    uint8_t unkD61;
    uint8_t unkD62;
    uint8_t unkD63;
    float customTargetTilt;
    float tiltRelated;
    float transversalForce;
    float bikeTiltSpeed;
    float bikeTiltReturnSpeed;
    float bikeTiltCustomSpeed;
    float bikeMaxTilt;
    uint64_t unkE00[8];
};
// RED4EXT_ASSERT_OFFSET(BikePhysics, callbackRelated, 0xD28);
RED4EXT_ASSERT_SIZE(BikePhysics, 0xE40);

struct TankPhysics : Physics
{
    // pre 2.0
    // after VehicleSystem_NPCCollision
    /// @pattern 56 65 68 69 63 6C 65 53 79 73 74 65 6D 5F 4E 50 43 43 6F 6C 6C 69 73 69 6F 6E 00 00 00 00 00 00
    /// @offset -64

    // post 2.0
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 ? ? ? ? 33 C9 48 8D 05 (fn:rel) 48 89 03 B8 CD CC 4C 3F 48
    /// @eval fn
    static constexpr const uintptr_t VFT = vehicleTankPhysics_VFT_Addr;
    
    virtual ~TankPhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;

    // TankBaseObject *wheeledBaseObject;
    //Vector3 unkD8;
    //Vector3 turnRate;
    //Vector3 wheelTurningThing;
    //bool yawMaxed;
    //uint8_t unkFD;
    //uint8_t unkFE;
    //uint8_t unkFF;

    uint8_t unkD0[0x3E0 - 0xF0];
};
RED4EXT_ASSERT_SIZE(TankPhysics, 0x3E0);

} // namespace physics
} // namespace RED4ext

