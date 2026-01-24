#include "HbkRhythmDungeonStoreWidget.h"

UHbkRhythmDungeonStoreWidget::UHbkRhythmDungeonStoreWidget() {
    this->StatusWidgetClass = NULL;
    this->OpenSound = NULL;
    this->ChangeSound = NULL;
    this->CancelSound = NULL;
    this->PurchaseSuccessSound = NULL;
    this->BGMVolumeDownSound = NULL;
    this->BGMVolumeUpSound = NULL;
    this->ShopDescScrollSpeed = 1000.00f;
    this->ItemList = NULL;
    this->PurchaseCommand = NULL;
    this->ResourceList = NULL;
    this->InformationPanel = NULL;
    this->RandomResult = NULL;
    this->Resource_PurchaseArea = NULL;
    this->InAnimation = NULL;
    this->OutAnimation = NULL;
}

void UHbkRhythmDungeonStoreWidget::UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkRhythmDungeonStoreWidget::TestStart() {
}

void UHbkRhythmDungeonStoreWidget::OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}

void UHbkRhythmDungeonStoreWidget::OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender) {
}

void UHbkRhythmDungeonStoreWidget::OnFinsihedStatusAnimation(const UHbkUserWidget* Sender) {
}


