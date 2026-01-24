#include "HbkGimmick_BreakTableSet.h"

AHbkGimmick_BreakTableSet::AHbkGimmick_BreakTableSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->OverlapImpulseRate = 100.00f;
    this->DamageImpulseRate = 100.00f;
}


