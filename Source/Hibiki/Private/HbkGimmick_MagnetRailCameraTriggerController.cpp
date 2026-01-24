#include "HbkGimmick_MagnetRailCameraTriggerController.h"

AHbkGimmick_MagnetRailCameraTriggerController::AHbkGimmick_MagnetRailCameraTriggerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineMagnet = NULL;
    this->StartDistance = 0.00f;
}

void AHbkGimmick_MagnetRailCameraTriggerController::OnQTESuccess() {
}


