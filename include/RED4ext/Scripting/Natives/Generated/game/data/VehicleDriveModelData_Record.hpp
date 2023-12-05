#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleDriveModelData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDriveModelData_Record";
    static constexpr const char* ALIAS = "VehicleDriveModelData_Record";

    // uint8_t waterParams[3];
    // uint8_t wheelSetup[3];
    // uint8_t burnOut[3];
    // uint8_t wheelsFrictionMap[3];
    // uint8_t driveHelpers[3];
    // uint8_t tankSpringsLocalPositions[3];
    // uint8_t biltTiltPID[3];
    // uint8_t bikeCurvesPath[3];
    // uint8_t center_of_mass_offset[3];
    // uint8_t momentOfInertiaScale[3];
    // uint8_t momentOfInertia[3];
    // uint8_t smoothWheelContactDecreaseTime[3];
    // uint8_t slopeTractionReductionBegin[3];
    // uint8_t sideWeightTransferFactor[3];
    // uint8_t turningRollFacorWeakContactThresholdMax[3];
    // uint8_t brakingEstimationMagicFactor[3];
    // uint8_t turningRollFactor[3];
    // uint8_t turnUpdateInputFastChangeSpeed[3];
    // uint8_t lowVelStoppingDeceleration[3];
    // uint8_t slipRatioMinSpeedThreshold[3];
    // uint8_t brakingFrictionFactor[3];
    // uint8_t turnUpdateInputSlowChangeSpeed[3];
    // uint8_t turningRollFactorWeakContactThresholdMin[3];
    // uint8_t handbrakeBrakingTorque[3];
    // uint8_t turnUpdateInputDiffProgressionPow[3];
    // uint8_t maxWheelTurnDeg[3];
    // uint8_t bodyFriction[3];
    // uint8_t slipAngleMinSpeedThreshold[3];
    // uint8_t bankBodyLRTanMultiplier[3];
    // uint8_t slipAngleCurveScale[3];
    // uint8_t tankAcceleration[3];
    // uint8_t turnUpdateInputDiffForSlowChange[3];
    // uint8_t perfectSteeringFactor[3];
    // uint8_t turnUpdateMaxSpeedTurnMul[3];
    // uint8_t bikeTiltReturnSpeed[3];
    // uint8_t wheelTurnMaxAddPerSecond[3];
    // uint8_t bikeTiltSpeed[3];
    // uint8_t turnUpdateBaseSpeedThreshold[3];
    // uint8_t turnUpdateMaxSpeedTurnChangeMul[3];
    // uint8_t antiSwaybarDampingScalor[3];
    // uint8_t total_mass[3];
    // uint8_t turnUpdateMaxSpeedThreshold[3];
    // uint8_t bankBodyFBTanMultiplier[3];
    // uint8_t slopeTractionReductionFactor[3];
    // uint8_t wheelTurnMaxSubPerSecond[3];
    // uint8_t bikeTiltCustomSpeed[3];
    // uint8_t tankSpringVerticalOffset[3];
    // uint8_t turningRollFactorWeakContactMul[3];
    // uint8_t slipRatioCurveScale[3];
    // uint8_t turnUpdateInputDiffForFastChange[3];
    // uint8_t tankSpringRadius[3];
    // uint8_t airResistanceFactor[3];
    // uint8_t burnOutRotationModifier[3];
    // uint8_t slopeTractionReductionMax[3];
    // uint8_t tankSpringDamping[3];
    // uint8_t differentialOvershootFactor[3];
    // uint8_t forwardWeightTransferFactor[3];
    // uint8_t tankSpringDistance[3];
    // uint8_t chassis_mass[3];
    // uint8_t tankSpringStiffness[3];
    // uint8_t smoothWheelContactIncreseTime[3];
    // uint8_t bikeMaxTilt[3];
    // uint8_t tankDeceleration[3];
    // uint8_t tankTurningSpeed[3];
    // uint8_t tankMaxSpeed[3];
    // uint8_t tankGravityMul[3];
    // uint8_t tankCTOP[3];
    // uint8_t tankCTOI[3];
    // uint8_t tankCTOD[3];
    // uint8_t useAlternaiveTurnUpdate[3]; 

    uint8_t unk48[0x2C8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDriveModelData_Record, 0x2C8);
} // namespace game::data
using gamedataVehicleDriveModelData_Record = game::data::VehicleDriveModelData_Record;
using VehicleDriveModelData_Record = game::data::VehicleDriveModelData_Record;
} // namespace RED4ext

// clang-format on
