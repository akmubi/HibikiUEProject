#include "HbkGimmick_RobotArmRail.h"

AHbkGimmick_RobotArmRail::AHbkGimmick_RobotArmRail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->PlatformNo = 1;
    this->bSaved = false;
    this->bActive = false;
}

void AHbkGimmick_RobotArmRail::SetPlatformObject(int32 Index, AActor* Object) {
}

FTransform AHbkGimmick_RobotArmRail::GetPlatformWorldTransform(float Length, bool bUseSplineRotate, FRotator RotationOffset) {
    return FTransform{};
}

FTransform AHbkGimmick_RobotArmRail::GetPlatformLocalTransform(float Length, bool bUseSplineRotate, FRotator RotationOffset) {
    return FTransform{};
}

void AHbkGimmick_RobotArmRail::ClearPlatformObject() {
}


