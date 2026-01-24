#include "HbkAnimInstParam.h"

FHbkAnimInstParam::FHbkAnimInstParam() {
    this->NetCounter = 0;
    this->MoveThrottle = 0.00f;
    this->Yaw = 0.00f;
    this->BrakeThrottle = 0.00f;
    this->bIsStrafing = false;
    this->YawInterpSpeed = 0.00f;
    this->MoveDirectionWorld = FVector(0.0f);
    this->MoveDirectionLocal = FVector(0.0f);
    this->MoveTargetLocation = FVector(0.0f);
}

