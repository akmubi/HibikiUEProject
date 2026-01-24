#include "HbkGimmick_LiftSEControl.h"

AHbkGimmick_LiftSEControl::AHbkGimmick_LiftSEControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pCurveOnSE = NULL;
    this->pCurveOffSE = NULL;
    this->pFlickOnSE = NULL;
    this->pFlickOffSE = NULL;
}

void AHbkGimmick_LiftSEControl::StartFlickOnSE() {
}

void AHbkGimmick_LiftSEControl::StartFlickOffSE() {
}

void AHbkGimmick_LiftSEControl::StartCurveOnSE() {
}

void AHbkGimmick_LiftSEControl::StartCurveOffSE() {
}


