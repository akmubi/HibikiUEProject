#include "HbkPopupDialogWidget.h"

UHbkPopupDialogWidget::UHbkPopupDialogWidget() {
    this->ItemWidgetClass = NULL;
    this->OpenSound = NULL;
    this->DecideSound = NULL;
    this->CancelSound = NULL;
    this->SelectSound = NULL;
    this->ButtonPanel = NULL;
    this->MessageTextBlock = NULL;
    this->OpenAnimation = NULL;
}

void UHbkPopupDialogWidget::SelectButton_MouseHovered(UHbkDialogItemWidget* ItemWidget) {
}


