#include "HbkPauseMenuWidget.h"

UHbkPauseMenuWidget::UHbkPauseMenuWidget() {
    this->OutFrameWidgetClass = NULL;
    this->OpenMenuSound = NULL;
    this->CloseMenuSound = NULL;
    this->DecideSound = NULL;
    this->LevelTransitionSound = NULL;
    this->LevelLoadSound = NULL;
    this->DescriptionText = NULL;
    this->ListArea = NULL;
    this->ListControl = NULL;
    this->InformationPanel = NULL;
    this->WaitingNotificationWidgetClass = NULL;
    this->ShowHowToPlayTask = NULL;
    this->ShowComboListTask = NULL;
    this->ShowOptionTask = NULL;
    this->OutFrameWidget = NULL;
}

void UHbkPauseMenuWidget::UpdateDescription(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkPauseMenuWidget::ReturnMenu() {
}

void UHbkPauseMenuWidget::OnLoadLevel() {
}

void UHbkPauseMenuWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}

void UHbkPauseMenuWidget::CancelDialog() {
}

void UHbkPauseMenuWidget::AcceptReturnToTitle() {
}

void UHbkPauseMenuWidget::AcceptReturnToRTMenu() {
}

void UHbkPauseMenuWidget::AcceptReturnToRDMenu() {
}

void UHbkPauseMenuWidget::AcceptReturnToHideout() {
}

void UHbkPauseMenuWidget::AcceptReturnToBPMRushMenu() {
}


