#include "HbkPhotoModeController.h"

UHbkPhotoModeController::UHbkPhotoModeController() {
    this->PhotoModeWidgetClass = NULL;
    this->PhotoCameraClass = NULL;
    this->PhotoChara_PlayerClass = NULL;
    this->PhotoModeWidget = NULL;
    this->FilterDataAsset = NULL;
    this->CharacterDataAsset = NULL;
    this->FrameDataAsset = NULL;
    this->StickerDataAsset = NULL;
}

void UHbkPhotoModeController::ResetAll() {
}

void UHbkPhotoModeController::OnValueResetAll() {
}

void UHbkPhotoModeController::OnValueChangedPageParameter(UHbkPhotoMenuPageBaseWidget* Sender) {
}

void UHbkPhotoModeController::OnValueChangedFilterPresetBlendRatio(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoModeController::OnStartedStickerMode(UHbkPhotoMenuPage_StickerWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedTabChanged(UHbkPhotoMenuParentWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedMotionChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedFrameChanged(UHbkPhotoMenuPage_FrameWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedFilterPresetTypeChanged(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedFacialChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoModeController::OnSelectedCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoModeController::OnLoadCompletedStickerTexture() {
}

void UHbkPhotoModeController::OnLoadCompletedFrameTexture() {
}

void UHbkPhotoModeController::OnLoadCompletedCharacterPose() {
}

void UHbkPhotoModeController::OnLoadCompletedCharacterFacial() {
}

void UHbkPhotoModeController::OnLoadCompletedCharacterActor() {
}

void UHbkPhotoModeController::OnEndedWidget(UHbkPhotoMenuParentWidget* Sender) {
}

void UHbkPhotoModeController::OnEndedStickerMode() {
}

void UHbkPhotoModeController::OnEnabledFilterChanged(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoModeController::OnEnabledCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoModeController::End() {
}

void UHbkPhotoModeController::Cancel() {
}


