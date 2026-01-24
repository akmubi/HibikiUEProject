#include "HbkCostumeModelController.h"

AHbkCostumeModelController::AHbkCostumeModelController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerParamAsset = NULL;
}

void AHbkCostumeModelController::SetWidgetInputState(bool bInput) {
}

void AHbkCostumeModelController::RotateCharacter(float AddYaw) {
}

AHbkCostumeWidgetModelActor* AHbkCostumeModelController::GetSelectedChara() const {
    return NULL;
}

AHbkCameraActor* AHbkCostumeModelController::GetCostumeCamera() const {
    return NULL;
}

UTexture* AHbkCostumeModelController::GetCopyBackBufferTexture() {
    return NULL;
}

void AHbkCostumeModelController::EndCopyBackBuffer() {
}

bool AHbkCostumeModelController::ChangePart(EHbkCostumePart SelectPart) {
    return false;
}

bool AHbkCostumeModelController::ChangeCharacter(EHbkPartnerType SelectChara, EHbkCostumePart SelectPart, bool bResetRotation) {
    return false;
}

void AHbkCostumeModelController::BeginCopyBackBuffer() {
}


