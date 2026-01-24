#include "HbkPlaceItemSpline.h"
#include "TngSplineComponent.h"

AHbkPlaceItemSpline::AHbkPlaceItemSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComp = CreateDefaultSubobject<UTngSplineComponent>(TEXT("Spline"));
    this->ItemClass = NULL;
    this->PlacementType = EHbkPlaceItemSplinePlacementType::Length;
    this->MarginStartPlacement = 0.00f;
    this->MarginEndPlacement = 0.00f;
    this->PlacementInterval = 300.00f;
    this->PlacementDivNum = 3;
    this->bSetSplinePointLocation = false;
    this->SplinePoint = 1;
}

int32 AHbkPlaceItemSpline::GetNumItemPlace() const {
    return 0;
}

FTransform AHbkPlaceItemSpline::GetItemPlacementTransform(int32 Index) const {
    return FTransform{};
}


