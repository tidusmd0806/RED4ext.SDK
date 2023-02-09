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
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>
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

struct UnkC8 {
  uint32_t unk00;
  Vector3 unk04;
  Vector4 linearVelocity;
  Vector4 angularVelocity;
  float unk30;
  float unk34;
  float unk38;
  float unk3C;
  WorldTransform unk40;
  float unk60;
  float unk64;
  float unk68;
  float unk6C;
};

#pragma pack(push, 1)
struct Physics
{
    // after "VehicleTeleportationIfFallsUnderWorld" string
    // 1.6  RVA: 0x3497B78
    // 1.61 RVA: 0x349CDC8
    // 1.62 RVA: 0x349FF08
    static constexpr const uintptr_t VFT_RVA = 0x349FF08;

    virtual ~Physics();
    virtual uint64_t SetVehicle(vehicle::BaseObject *);
    virtual uint64_t sub_10();
    virtual uint64_t sub_18();
    virtual uint64_t sub_20();
    virtual uint64_t UpdateTransform();
    virtual void sub_30(uint32_t *, float*);
    // checks for vehicle being Z < -100, teleports if so (VehicleTeleportationIfFallsUnderWorld @ RVA 0x4781A38)
    virtual void sub_38(float deltaTime);
    virtual void sub_40(float deltaTime);
    virtual uint64_t FixedUpdate_PreSolve(uint64_t, float);
    // also called w/o arg?
    // sets this->velocity from physicsData->velocity
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
    virtual void sub_D0();
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
    virtual void sub_118();
    // updates some animation stuff, sub_120
    virtual uint64_t UpdateWheelAnimations();
    // update blackboard, effectdata
    virtual uint64_t UpdateBlackboard();
    virtual void sub_130();
    virtual uint64_t sub_138();
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record> *);

    // 1.52 RVA: 0x1CEB5B0 / 30324144
    /// @pattern 80 79 50 00 75 03 32 C0 C3 F2 0F 10 41 30 F2 0F 11 02 8B 41 38 89 42 08 B0 01 0F 10 41 40 0F 11
    char __fastcall ReadWorldTransform(WorldTransform *a2);

    // 1.52 RVA: 0x1CEB370 / 30323568
    /// @pattern 48 89 5C 24 20 55 41 56 41 57 48 8D 6C 24 B9 48 81 EC B0 00 00 00 4C 8B F1 41 0F B6 D8 48 8B 49
    void __fastcall UpdateDataWorldTransform(WorldTransform * a2, bool updateChassis);

    // 1.52 RVA: 0x1CEB5E0 / 30324192
    /// @pattern 48 8B 49 60 E9 87 48 A4 FE
    PhysicsData *__fastcall GetPhysicsData();

    // 1.52 RVA: 0x1CEB920 / 30325024
    /// @pattern 48 8B 41 68 F3 0F 10 40 10 0F 2F 40 20 0F 96 C0 C3
    bool __fastcall GetSomethingWaterParams();

    // 1.52 RVA: 0x1CEB940 / 30325056
    /// @pattern 48 83 EC 28 48 8B 49 60 E8 23 45 A4 FE 48 8B C8 48 83 C4 28 E9 F7 5B FF FF
    bool __fastcall UsesAlternativeChassisMass();

    // 1.52 RVA: 0x1CEBAE0 / 30325472
    /// @pattern F6 C2 01 74 3B 53 48 83 EC 40 48 8B D9 48 8D 54 24 20 48 8B 49 60 E8 35 A7 34 FF F2 0F 10 00 F2
    void __fastcall UpdateWorldTransform2FromParent(char a2);

    // 1.52 RVA: 0x1CEC3F0 / 30327792
    /// @pattern 48 89 5C 24 10 48 89 6C 24 20 56 57 41 56 48 83 EC 20 48 8B 01 4C 8B F1 FF 90 40 01 00 00 48 8D
    double __fastcall LoadHasBeenFlippedOver(Handle<game::data::VehicleDriveModelData_Record> *a2);

    // 1.52 RVA: 0x1CEC520 / 30328096
    /// @pattern C7 81 A0 00 00 00 00 00 80 3F C3
    void __fastcall SetUnkA0ToOne();

    // 1.52 RVA: 0x1CEC530 / 30328112
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 48 8B F9 48 8B DA 48 8B 49 60 E8 27 39 A4 FE 48 8B C8 48 8B D3 E8
    void __fastcall ResetWithWorldTransform(WorldTransform *worldTransform);

    // 1.52 RVA: 0x1CEC5E0 / 30328288
    /// @pattern 48 83 EC 28 48 8B 49 60 84 D2 74 19 E8 7F 38 A4 FE F3 0F 10 0D DF 0F 3D 01 48 8B C8 48 83 C4 28
    __int64 __fastcall SetUsesAlternativeChassisMass(bool uses);

    // 1.52 RVA: 0x1CED2A0 / 30331552
    /// @pattern 40 53 48 81 EC 80 00 00 00 4C 8B 41 60 0F 57 C0 F3 0F 7F 44 24 20 48 8B D9 44 0F 29 44 24 50 44
    void __fastcall ComputeSleep(float deltaTime);

    // 1.52 RVA: 0x368A20 / 3574304
    /// @pattern 48 8B 41 60 C3
    BaseObject *__fastcall GetVehicle();

    uint64_t unk08;
    Vector3 velocity; // 10
    uint32_t unk1C;
    uint8_t unk20;
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
    float unkA4;
    float setTo0point5;
    int32_t unkAC;
    float unkB0;
    // computed from chassis component
    bool isMoving;
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
    uint16_t unkBE;
    float has_been_flipped_over_for_some_time_delay;
    float unkC4;
    UnkC8* physicsBaseStruct2;
};
//char (*__kaboom)[sizeof(Physics)] = 1;
//char (*__kaboom2)[offsetof(Physics, unk08)] = 1;

struct UnkD10 {


};

struct WheeledPhysics : Physics 
{
    // after "EnableSmoothWheelContacts" string
    // 1.6  RVA: 0x3498388
    // 1.61 RVA: 0x349D5D8
    // 1.62 RVA: 0x34A0718
    static constexpr const uintptr_t VFT_RVA = 0x34A0718;

    // 1.52 RVA: 0x1D0DB70 / 30464880
    /// @pattern 40 56 41 56 48 83 EC 38 48 89 5C 24 58 4C 8B F1 48 89 7C 24 68 4C 89 7C 24 30 8B F2 E8 1F C9 FD
    WheeledPhysics(unsigned int wheels);
    
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
    virtual bool UpdatePhysicsStuff() override;
    virtual bool IsInAirFromVehicle() override;
    // virtual bool SomethingOrientationIsInAir() override;
    virtual void sub_D0() override;
    virtual void sub_D8(char) override;
    // get e4
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
    virtual bool sub_158(uint64_t, uint64_t);
    virtual uint32_t GetWheelUnk90(uint64_t, uint64_t);
    // returns 0
    virtual bool sub_168(uint64_t);
    // returns 0
    virtual bool sub_170(uint64_t);
    // empty
    virtual void UpdateTilt(float deltaTime);
    virtual void VehiclePhysicsUpdate();
    virtual void UpdateTurn();
    // throw error
    virtual void UpdateSuspensionAnimation();
    virtual void UpdateVehicleLinearVelocityStuff();
    virtual void UpdateVehRotW(float deltaTime);
    // returns 1f
    virtual void sub_1A8(uint32_t);

    // 1.52 RVA: 0x1D11A50 / 30480976
    /// @pattern 48 8B C4 48 89 58 08 48 89 70 10 57 48 81 EC C0 00 00 00 0F 29 70 E8 48 8B F1 48 8B 89 F8 00 00
    void __fastcall UpdatePassengerAnim(anim::AnimFeature_VehiclePassenger *);

    uint32_t unkD0;
    float unkD4;
    float unkD8;
    float unkDC;
    float unkE0;
    float turnRate;
    uint32_t unkE8;
    uint32_t unkEC;
    float wheelTurningThing;
    uint8_t unkF4;
    uint8_t unkF5;
    uint8_t unkF6;
    uint8_t unkF7;
    WheeledBaseObject* wheeledObject;
    physics::VehiclePhysicsInsert1 wheel1;
    physics::VehiclePhysicsInsert1 wheel2;
    physics::VehiclePhysicsInsert1 wheel3;
    physics::VehiclePhysicsInsert1 wheel4;
    uint32_t wheelCount;
    uint32_t unk5C4[3];
    physics::VehiclePhysicsInsert2 insert1;
    physics::VehiclePhysicsInsert2 insert2;
    physics::VehiclePhysicsInsert2 insert3;
    physics::VehiclePhysicsInsert2 insert4;
    uint8_t insertCount;
    uint8_t unkB91;
    uint8_t unkB92;
    uint8_t unkB93;
    uint32_t unkB94[6];
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
    float unkC3C;
    Vector4 unkC40;
    Matrix unkC50;
    Matrix unkC90;
    uint32_t unkCD0[4];
    uint32_t wheelsNeedUpdate;
    uint32_t unkCE4;
    DynArray<uintptr_t> driveHelpers;
    Handle<void> curveSet;
    uint64_t stuckTimeout;
    UnkD10* unkD10;
    uint64_t unkD18;
};
#pragma pack(pop)
RED4EXT_ASSERT_OFFSET(WheeledPhysics, driveHelpers, 0xCE8);
RED4EXT_ASSERT_SIZE(WheeledPhysics, 0xD20);
//char (*__kaboom)[offsetof(WheeledPhysics, unkC40)] = 1;

struct CarPhysics : WheeledPhysics
{
    // a little after "VehiclePassenger" string
    // 1.6  RVA: 0x34980C0
    // 1.61 RVA: 0x349D310
    // 1.62 RVA: 0x34A0450
    static constexpr const uintptr_t VFT_RVA = 0x34A0450;

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
    virtual bool sub_158(uint64_t, uint64_t) override;
    // virtual uint32_t GetWheelUnk90(uint64_t, uint64_t) override;
    // is rear wheel maybe
    virtual bool sub_168(uint64_t) override;
    // also rear wheel maybe
    virtual bool sub_170(uint64_t) override;
    // virtual void UpdateTilt(float deltaTime) override;
    virtual void VehiclePhysicsUpdate() override;
    // update steering
    virtual void UpdateTurn() override;
    // update wheel blackbords
    virtual void UpdateSuspensionAnimation() override;
    // virtual void UpdateVehicleLinearVelocityStuff() override;
    // virtual void UpdateVehRotW(float deltaTime) override;
    // get insert pointers
    virtual void sub_1A8(uint32_t) override;

    // 1.52 RVA: 0x1D09090 / 30445712
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 BA 04 00 00 00 48 8B D9 E8 C9 4A 00 00 48 8D 05 62 8B 72 01 33 FF
    CarPhysics();

    // 1.52 RVA: 0x1D0C290 / 30458512
    /// @pattern 48 89 5C 24 18 56 48 81 EC D0 00 00 00 48 8B F1 0F 29 B4 24 C0 00 00 00 48 8B 89 20 0D 00 00 BA
    int64_t __fastcall AnimationUpdate(float);

    CarBaseObject* carObject;
    PID bankBodyFBPID;
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
    float unkD90;
    float minLongSlipRatioMaybe;
    float unkD98[3];
    float swaybarLengthScalarMaybe;
    float minLongFrictionCoefMaybe;
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
    uint64_t unkE78;
};
RED4EXT_ASSERT_OFFSET(CarPhysics, unkE78, 0xE78);

struct BikePhysics : WheeledPhysics
{
    // a little after "BikeHackTiltCalcValue" string
    // 1.6  RVA: 0x3431A30
    // 1.61 RVA: 0x349D130
    // 1.62 RVA: 0x34A0270
    static constexpr const uintptr_t VFT_RVA = 0x34A0270;

    virtual ~BikePhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;
    virtual void sub_30(uint32_t *, float*) override;
    virtual void sub_118() override;
    virtual uint64_t UpdateWheelAnimations() override;
    virtual uint64_t UpdateBlackboard() override;
    virtual void LoadSomeVehiclePhysicsStuff(Handle<game::data::VehicleDriveModelData_Record>*) override;
    virtual bool sub_158(uint64_t, uint64_t) override;
    virtual bool sub_170(uint64_t) override;
    virtual void UpdateTilt(float deltaTime) override;
    virtual void UpdateTurn() override;
    virtual void UpdateSuspensionAnimation() override;

    // 1.52 RVA: 0x1D04210 / 30425616
    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 BA 02 00 00 00 48 8B D9 E8 49 99 00 00 33 FF 48 8D 05 00 D8 72 01
    BikePhysics();

    // 1.52 RVA: 0x1D06B00 / 30436096
    // 1.61 RVA: 0x1D33630
    // static constexpr const uintptr_t AnimationUpdateAddr = 0x1D33630;
    /// @pattern 48 89 5C 24 10 57 48 83 EC 40 48 8B 81 20 0D 00 00 48 8B D9 F3 0F 10 81 E4 00 00 00 0F 57 05
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
};
// RED4EXT_ASSERT_OFFSET(BikePhysics, callbackRelated, 0xD28);


struct TankPhysics : Physics
{
    // static constexpr const uintptr_t VFT_RVA = 0x3432650;
    
    virtual ~TankPhysics() override;
    virtual uint64_t SetVehicle(vehicle::BaseObject *) override;

    //TankBaseObject *wheeledBaseObject;
    //Vector3 unkD8;
    //Vector3 turnRate;
    //Vector3 wheelTurningThing;
    //bool yawMaxed;
    //uint8_t unkFD;
    //uint8_t unkFE;
    //uint8_t unkFF;
};

} // namespace physics
} // namespace RED4ext

