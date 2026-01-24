#include "HbkStoreMenuBaseWidget.h"

UHbkStoreMenuBaseWidget::UHbkStoreMenuBaseWidget() {
    this->CancelSound = NULL;
    this->PurchaseSuccessSound = NULL;
    this->SellSuccessSound = NULL;
    this->UpgradeSuccessSound = NULL;
    this->EquipmentChangeSound = NULL;
    this->CharacterTabChangeSound = NULL;
    this->Background = NULL;
    this->ItemList = NULL;
    this->PurchaseCommand = NULL;
    this->ResourceList = NULL;
    this->InformationPanel = NULL;
    this->Highlight = NULL;
    this->InputMask = NULL;
    this->OpenAnimation = NULL;
    this->CloseAnimation = NULL;
    this->MenuSelectWidget = NULL;
    this->TutorialTalkSession = NULL;
}

void UHbkStoreMenuBaseWidget::UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkStoreMenuBaseWidget::OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuBaseWidget::OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuBaseWidget::OnEndTutorialTalk(const FHbkTalkContext TalkContext) {
}


