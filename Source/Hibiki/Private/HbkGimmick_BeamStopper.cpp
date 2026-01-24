#include "HbkGimmick_BeamStopper.h"

AHbkGimmick_BeamStopper::AHbkGimmick_BeamStopper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveActivate = false;
}

void AHbkGimmick_BeamStopper::SplineMoveEnd() {
}


