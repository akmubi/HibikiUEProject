#include "HbkGimmick_RobotArmRailPlatform.h"

FHbkGimmick_RobotArmRailPlatform::FHbkGimmick_RobotArmRailPlatform() {
    this->ObjectClass = NULL;
    this->Object = NULL;
    this->bUseSplineRotate = false;
    this->DelayPoint = 0;
    this->RotationOffset = FRotator(0.0f);
}

