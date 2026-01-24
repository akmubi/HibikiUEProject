#include "HbkGimmick_BuildingSlideGuide.h"

AHbkGimmick_BuildingSlideGuide::AHbkGimmick_BuildingSlideGuide(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpActor = NULL;
    this->InputAxisScale = 1.00f;
    this->MoveYAccelerationMax = 3.00f;
    this->MoveYDeceleration = 0.10f;
    this->PlayerMoveRotatorZ = 35.00f;
    this->RestPlayerMove = 30;
}

void AHbkGimmick_BuildingSlideGuide::ForceEndBuildingSlide() {
}


