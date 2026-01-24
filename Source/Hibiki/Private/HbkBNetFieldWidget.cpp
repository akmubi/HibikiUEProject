#include "HbkBNetFieldWidget.h"

UHbkBNetFieldWidget::UHbkBNetFieldWidget() {
    this->DecideSound = NULL;
    this->KeyboardType = EVirtualKeyboardType::Default;
    this->bIsPassword = false;
    this->FrameBorder = NULL;
    this->EmptyLabelTextBlock = NULL;
    this->ErrorMessageTextBlock = NULL;
    this->ValueTextBox = NULL;
}

void UHbkBNetFieldWidget::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}


