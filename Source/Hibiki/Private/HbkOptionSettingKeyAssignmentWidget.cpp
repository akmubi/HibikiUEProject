#include "HbkOptionSettingKeyAssignmentWidget.h"

UHbkOptionSettingKeyAssignmentWidget::UHbkOptionSettingKeyAssignmentWidget() {
    this->DeviceType = EHbkHUDFollowDevice::KeyboardMouse;
    this->ResetExecuteSound = NULL;
    this->InformationPanel = NULL;
    this->TypeSwitcher = NULL;
    this->PlatformSwitcher_A = NULL;
    this->PlatformSwitcher_B = NULL;
    this->ListScrollBox = NULL;
    this->ListControl = NULL;
    this->TabArea = NULL;
    this->TabListControl = NULL;
    this->InputMask = NULL;
    this->KeepWaitKeyAssignmentItemWidget = NULL;
}

void UHbkOptionSettingKeyAssignmentWidget::UpdateTabInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkOptionSettingKeyAssignmentWidget::UpdateInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkOptionSettingKeyAssignmentWidget::OnClickedTabListItem(const UHbkButtonBaseWidget* Sender) {
}

void UHbkOptionSettingKeyAssignmentWidget::OnCancelReplacePrioritizeKeyAssign() {
}

void UHbkOptionSettingKeyAssignmentWidget::OnAcceptReplacePrioritizeKeyAssign() {
}

void UHbkOptionSettingKeyAssignmentWidget::CancelDialog() {
}

void UHbkOptionSettingKeyAssignmentWidget::AcceptRestoreDefaultSettings() {
}


