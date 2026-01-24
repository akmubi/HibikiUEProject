#include "HbkAm1000_Pigeon.h"

AHbkAm1000_Pigeon::AHbkAm1000_Pigeon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->runAwayFlag = false;
    this->FlyFarFlag = false;
    this->StartFlyFarSeRef = NULL;
}

float AHbkAm1000_Pigeon::GetRandomStartTime() {
    return 0.0f;
}

int32 AHbkAm1000_Pigeon::GetRandomAnimValue() {
    return 0;
}

float AHbkAm1000_Pigeon::GetRandomAnimSpeed() {
    return 0.0f;
}


