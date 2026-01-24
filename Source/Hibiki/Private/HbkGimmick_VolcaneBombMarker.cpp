#include "HbkGimmick_VolcaneBombMarker.h"

AHbkGimmick_VolcaneBombMarker::AHbkGimmick_VolcaneBombMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolcaneBombType = EHbkAHbkGimmick_VolcaneBombType::Attack;
    this->VolcaneBombRadius = 300.00f;
    this->bEnableAdjustGroundLocation = true;
    this->GroundTraceCollisionChannel = ECC_Visibility;
}


