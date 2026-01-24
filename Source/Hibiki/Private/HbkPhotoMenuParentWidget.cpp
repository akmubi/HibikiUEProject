#include "HbkPhotoMenuParentWidget.h"

UHbkPhotoMenuParentWidget::UHbkPhotoMenuParentWidget() {
    this->PhotoMenuBasePanel = NULL;
    this->PhotoMenuOverlay = NULL;
    this->PageSwitcher = NULL;
    this->Adjustment = NULL;
    this->Filter = NULL;
    this->Pose = NULL;
    this->Frame = NULL;
    this->Sticker = NULL;
    this->Tab_Adjustment = NULL;
    this->Tab_Filter = NULL;
    this->Tab_Pose = NULL;
    this->Tab_Frame = NULL;
    this->Tab_Sticker = NULL;
    this->FooterButton = NULL;
    this->CaptureSuccessIcon = NULL;
    this->OutLineFrameWidgetClass = NULL;
    this->BasePanel = NULL;
    this->FrameImagePanel = NULL;
    this->FrameSizePanel = NULL;
    this->InOutAnim = NULL;
    this->StickerRoot = NULL;
    this->TabChangeSE = NULL;
    this->ShutterSE = NULL;
    this->DecideSE = NULL;
    this->MenuSwitchSE = NULL;
    this->StartMenuSE = NULL;
    this->StickerDesideSE = NULL;
    this->StickerCancelSE = NULL;
    this->StickerDeleteSE = NULL;
}

void UHbkPhotoMenuParentWidget::OnValueChangedFilterPagePresetBlendRatio(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedStickerTabChanged(UHbkPhotoMenuPage_StickerWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedStickerDeleted(UHbkPhotoMenuPage_StickerWidget* Sender, int32 DeleteId) {
}

void UHbkPhotoMenuParentWidget::OnSelectedStickerChanged(UHbkPhotoMenuPage_StickerWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedPosePageMotionChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedPosePageFacialChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedPosePageCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedFilterPagePresetTypeChanged(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnSelectedFilterPageEnabledFilterChanged(UHbkPhotoMenuPage_FilterWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnResetedSticker(UHbkPhotoMenuPage_StickerWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnEndedStickerMode() {
}

void UHbkPhotoMenuParentWidget::OnEnabledPosePageCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnDeletedSticker(int32 DeleteId) {
}

void UHbkPhotoMenuParentWidget::OnDecidedStickerChanged(UHbkPhotoMenuPage_StickerWidget* Sender) {
}

void UHbkPhotoMenuParentWidget::OnClickedStickerResetButton() {
}

void UHbkPhotoMenuParentWidget::ChangedValue(UHbkPhotoMenuPageBaseWidget* PageWidget) {
}


