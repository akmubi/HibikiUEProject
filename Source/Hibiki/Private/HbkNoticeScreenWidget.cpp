#include "HbkNoticeScreenWidget.h"

UHbkNoticeScreenWidget::UHbkNoticeScreenWidget() {
    this->BootScreenDisplayTimeSeconds = 5.00f;
    this->ScreenSwitcher = NULL;
    this->HelpButtons = NULL;
    this->WipeWidget = NULL;
    this->RootBorder = NULL;
}

void UHbkNoticeScreenWidget::OnCloseWipeAnimationFinished() {
}


