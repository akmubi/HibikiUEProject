#include "HbkOptionWidget.h"

UHbkOptionWidget::UHbkOptionWidget() {
    this->OpenMenuSound = NULL;
    this->ResetExecuteSound = NULL;
    this->ChangeValueSound = NULL;
    this->LevelTransitionSound = NULL;
    this->CancelSound = NULL;
    this->ContentRootOverlay = NULL;
    this->CommonBackground = NULL;
    this->InformationPanel = NULL;
    this->ListSwitcher = NULL;
    this->ListSwitcherForInitialSetting = NULL;
    this->OptionIcon = NULL;
    this->ListScrollBox = NULL;
    this->ListControl = NULL;
    this->TabArea = NULL;
    this->GamerTag = NULL;
    this->TabListControl = NULL;
    this->OpenAnimation = NULL;
    this->CloseAnimation = NULL;
    this->ScreenModeListItem = NULL;
    this->ScreenResolutionListItem = NULL;
    this->FrameRateLImitListItem = NULL;
    this->GraphicsPresetListItem = NULL;
    this->CameraMotionBlurListItem = NULL;
    this->DynamicShadowMapsListItem = NULL;
    this->StaticGlobalIlluminationListItem = NULL;
    this->StaticShadowMapsListItem = NULL;
    this->FoliageQualityListItem = NULL;
    this->SSAOListItem = NULL;
    this->SSRListItem = NULL;
    this->DepthOfFieldListItem = NULL;
    this->AntiAliasingListItem = NULL;
    this->UpscalingTechniqueListItem = NULL;
    this->DLSSQualityListItem = NULL;
    this->FSR1QualityListItem = NULL;
    this->FSR1SharpnessListItem = NULL;
    this->FSR2QualityListItem = NULL;
    this->FSR2SharpnessListItem = NULL;
    this->XeSSQualityListItem = NULL;
    this->TSRQualityListItem = NULL;
    this->MasterVolumeListItem = NULL;
    this->BgmVolumeListItem = NULL;
    this->VoiceVolumeListItem = NULL;
    this->SFXVolumeListItem = NULL;
    this->InstFXVolumeListItem = NULL;
    this->RichTextBlockImageSEtListItem = NULL;
}

void UHbkOptionWidget::UpdateTabInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkOptionWidget::UpdateInfoForInitialSetting(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkOptionWidget::UpdateInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}


void UHbkOptionWidget::OnFinishCloseAnimation() {
}

void UHbkOptionWidget::OnClickedTabListItem(const UHbkButtonBaseWidget* Sender) {
}

void UHbkOptionWidget::OnClickedListItemShowSetting(const UHbkButtonBaseWidget* Sender) {
}

void UHbkOptionWidget::CancelDialog() {
}

void UHbkOptionWidget::AcceptRestoreDefaultSettings() {
}

void UHbkOptionWidget::AcceptRestartFromCheckPoint() {
}

void UHbkOptionWidget::AcceptReflectChangesForInitialSetting() {
}

void UHbkOptionWidget::AcceptReflectChanges() {
}

void UHbkOptionWidget::AcceptDiscardChangesAndClose() {
}


