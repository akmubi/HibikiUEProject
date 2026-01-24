#include "HbkGimmick_SecDFloor.h"

AHbkGimmick_SecDFloor::AHbkGimmick_SecDFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->InitRandomRotate = false;
    this->ArrivedFlag = false;
    this->bExecSave = true;
    this->bDoOnceSave = false;
}

void AHbkGimmick_SecDFloor::OnMoveStart() {
}

void AHbkGimmick_SecDFloor::OnMoveEnd() {
}

void AHbkGimmick_SecDFloor::OnLoadSuccessForSplineMove() {
}


