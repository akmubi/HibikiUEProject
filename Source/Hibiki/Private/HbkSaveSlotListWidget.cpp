#include "HbkSaveSlotListWidget.h"

UHbkSaveSlotListWidget::UHbkSaveSlotListWidget() {
    this->ListBox = NULL;
    this->BaseBG = NULL;
    this->ListControl = NULL;
    this->AkEvent_Open = NULL;
    this->AkEvent_DecisionClose = NULL;
    this->AkEvent_CancelClose = NULL;
    this->AkEvent_MoveCursor = NULL;
    this->NewCellWidgetClass = NULL;
    this->ExistCellWidgetClass = NULL;
    this->StageDetailTable = NULL;
}

void UHbkSaveSlotListWidget::SetPlayingAnim(bool bPlaying) {
}


void UHbkSaveSlotListWidget::OnDialogOverwriteSave() {
}

void UHbkSaveSlotListWidget::OnDialogDeleteSlot() {
}

void UHbkSaveSlotListWidget::OnCloseWnd() {
}





