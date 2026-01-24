#include "HbkGimmickFloorRotate.h"

AHbkGimmickFloorRotate::AHbkGimmickFloorRotate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->RotateBeginByStepEffect = NULL;
    this->RotateEndEffect = NULL;
    this->pRotateBeginByStepSE = NULL;
    this->pRotateEndSE = NULL;
    this->MinRotateValue = 0.00f;
    this->MaxRotateValue = 90.00f;
    this->ArrowNameMinRotate = TEXT("MinRotate");
    this->ArrowNameMaxRotate = TEXT("MaxRotate");
    this->bInitRotateIsMax = false;
    this->bIsMoveInverseOneNote = false;
    this->bMoveOneStepOnActivate = false;
    this->bFinishOnEndRotate = true;
    this->bIsInverseRotate = false;
    this->MoveStepCountMax = 1;
    this->MoveNoteCountMax = 1;
}

void AHbkGimmickFloorRotate::DisableMoveOneStep() {
}


