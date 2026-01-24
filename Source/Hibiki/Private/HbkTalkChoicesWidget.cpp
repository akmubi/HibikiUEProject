#include "HbkTalkChoicesWidget.h"

UHbkTalkChoicesWidget::UHbkTalkChoicesWidget() {
    this->NumChoiceItem = 0;
    this->CurChoiceItemID = 0;
    this->RegisterLayerOnShow = 0;
    this->bNeedChoiceItemReset = true;
    this->bTickableWhenPause = true;
}

void UHbkTalkChoicesWidget::Invoke_PushChoiceItem(const FName& InItemName, const FText& InItemText, const FName& InMetaName, bool bNewMarkFlag) {
}

void UHbkTalkChoicesWidget::Invoke_InputChoiceUp() {
}

void UHbkTalkChoicesWidget::Invoke_InputChoiceDown() {
}

void UHbkTalkChoicesWidget::Invoke_InputChoiceDecide() {
}

void UHbkTalkChoicesWidget::Invoke_InputChoiceCancel() {
}

void UHbkTalkChoicesWidget::Invoke_EndChoices() {
}

void UHbkTalkChoicesWidget::Invoke_BeginChoices() {
}

FName UHbkTalkChoicesWidget::GetCurChoiceFocus() const {
    return NAME_None;
}










