#include "HbkGimmickFloorMovingWalk.h"

AHbkGimmickFloorMovingWalk::AHbkGimmickFloorMovingWalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveForce = 0.00f;
}


