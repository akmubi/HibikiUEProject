#include "HbkGimmick_GiantRobotActualArea.h"

AHbkGimmick_GiantRobotActualArea::AHbkGimmick_GiantRobotActualArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->GiantRobot = NULL;
    this->Range = 1000.00f;
}

FVector AHbkGimmick_GiantRobotActualArea::GetScale() const {
    return FVector{};
}

FRotator AHbkGimmick_GiantRobotActualArea::GetRotation() const {
    return FRotator{};
}


