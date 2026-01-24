#include "HbkGimmick_SecDComPassA.h"

AHbkGimmick_SecDComPassA::AHbkGimmick_SecDComPassA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveEndInverseColor = false;
    this->bSaveActivateFlag = false;
    this->bSaveActivate = false;
    this->pActivateMoveStartSE = NULL;
    this->pActivateMoveEndSE = NULL;
    this->pDeactivateMoveStartSE = NULL;
    this->pDeactivateMoveEndSE = NULL;
}

void AHbkGimmick_SecDComPassA::OnMoveStart() {
}

void AHbkGimmick_SecDComPassA::OnMoveEnd() {
}


