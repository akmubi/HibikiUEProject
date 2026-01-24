#include "HbkComplexLaunchParam.h"

FHbkComplexLaunchParam::FHbkComplexLaunchParam() {
    this->ProjectileClass = NULL;
    this->LaunchingNoteCount = 0;
    this->bIsForceAdjustOwnerAngle = false;
    this->LaunchEffect = NULL;
    this->StartOffset = FVector(0.0f);
    this->StartRotate = FRotator(0.0f);
}

