#include "HbkGimmick_BreakRockFloor.h"

AHbkGimmick_BreakRockFloor::AHbkGimmick_BreakRockFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->OverlapImpulseRate = 100.00f;
    this->DamageImpulseRate = 100.00f;
}


