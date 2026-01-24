#include "HbkEm0650_AIController.h"

AHbkEm0650_AIController::AHbkEm0650_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TornadoAttackIntervalCount = 48.00f;
    this->EnabledLaserCount = 10.00f;
    this->LaserAnimHorizontalInterpSpeed = 8.00f;
    this->LaserAnimHorizontalInterpConstant = false;
    this->LaserAngleMax = 30.00f;
    this->LaserBlendSpaceRangeMax = 100.00f;
    this->LaserTargetOverMoveOffset = 2500.00f;
    this->LaserTargetPosInterpSpeed = 3.00f;
    this->LaserTargetPosDiffMin = 2.00f;
    this->LaserTargetPosDiffMax = 50.00f;
    this->LaserRotateInterpSpeed = 1.00f;
    this->LaserRotateInterpConstant = false;
    this->LaserTargetAngleOffsetRate = 1.50f;
}

bool AHbkEm0650_AIController::GetEnalbedTornadoAttack() const {
    return false;
}


