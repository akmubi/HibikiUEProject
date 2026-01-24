#include "HbkGimmick_VolcaneBomb.h"
#include "TngSplineComponent.h"

AHbkGimmick_VolcaneBomb::AHbkGimmick_VolcaneBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SplineComp = CreateDefaultSubobject<UTngSplineComponent>(TEXT("Spline"));
}


