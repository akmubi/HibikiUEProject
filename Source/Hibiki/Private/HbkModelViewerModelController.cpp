#include "HbkModelViewerModelController.h"

AHbkModelViewerModelController::AHbkModelViewerModelController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoomTime = 1.00f;
    this->MoveTime = 1.00f;
    this->RotateSpeed = 1.00f;
    this->MovePresetDT = NULL;
    this->ModelViewerMoveDT = NULL;
}

void AHbkModelViewerModelController::EndCopyBackBuffer() {
}

void AHbkModelViewerModelController::BeginCopyBackBuffer() {
}


