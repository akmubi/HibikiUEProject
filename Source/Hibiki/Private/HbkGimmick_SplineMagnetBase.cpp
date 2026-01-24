#include "HbkGimmick_SplineMagnetBase.h"

AHbkGimmick_SplineMagnetBase::AHbkGimmick_SplineMagnetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->TakeOverCamera = false;
    this->moveSplineActor = NULL;
    this->StartDistance = 0.00f;
    this->moveSpeed = 100.00f;
    this->CameraController = NULL;
}

void AHbkGimmick_SplineMagnetBase::SetMagnetPointEnabled(bool Enabled, bool ForceTargetPoint, bool ForceDisplayTargetPoint) {
}


