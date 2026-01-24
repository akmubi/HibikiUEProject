#include "HbkJumpParameter.h"

FHbkJumpParameter::FHbkJumpParameter() {
    this->StartToEndDist = 0.00f;
    this->TopHeight = 0.00f;
    this->JumpToGroundTimeMax = 0.00f;
    this->ElapsedTime = 0.00f;
    this->PrePlayRate = 0.00f;
    this->NetCounter = 0;
    this->StartToEndDir = FVector(0.0f);
    this->StartLocation = FVector(0.0f);
    this->EndLocation = FVector(0.0f);
}

