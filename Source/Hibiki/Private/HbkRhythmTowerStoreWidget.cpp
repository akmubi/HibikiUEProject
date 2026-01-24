#include "HbkRhythmTowerStoreWidget.h"

UHbkRhythmTowerStoreWidget::UHbkRhythmTowerStoreWidget() {
    this->CancelSound = NULL;
    this->PurchaseSuccessSound = NULL;
    this->ItemList = NULL;
    this->PurchaseCommand = NULL;
    this->ResourceList = NULL;
    this->InformationPanel = NULL;
    this->RandomResult = NULL;
    this->RestTimeWidget = NULL;
}

void UHbkRhythmTowerStoreWidget::UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkRhythmTowerStoreWidget::OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}

void UHbkRhythmTowerStoreWidget::OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}


