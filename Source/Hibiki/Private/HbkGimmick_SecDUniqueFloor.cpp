#include "HbkGimmick_SecDUniqueFloor.h"

AHbkGimmick_SecDUniqueFloor::AHbkGimmick_SecDUniqueFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveType = EHbkGimmick_SecDUniqueFloorSaveType::SUF_SVT_NONE;
}

void AHbkGimmick_SecDUniqueFloor::OnLoadSuccessForSplineMove() {
}


