#include "HbkStoreMenuChipsWidget.h"

UHbkStoreMenuChipsWidget::UHbkStoreMenuChipsWidget() {
    this->ChipLevelChangeSound = NULL;
    this->ChipUnequipSound = NULL;
    this->EquipmentChipDecideSound = NULL;
    this->EquipmentChipCancelSound = NULL;
    this->EquipmentSlotSelectSound = NULL;
    this->MoveMenuSound = NULL;
    this->EquipmentCommand = NULL;
    this->EquipmentSlotList = NULL;
    this->ToPurchaseButton = NULL;
    this->ToEquipmentButton = NULL;
    this->SelectedChipInfoArea = NULL;
    this->SelectedChipNameText = NULL;
    this->SelectedChipLevelText = NULL;
    this->SelectedChipDescriptionText = NULL;
    this->SelectedChipNameArea = NULL;
    this->SelectedChipButtonArea = NULL;
    this->ArrowForInputToEquipment = NULL;
    this->ArrowForInputPurchaseCommand = NULL;
    this->ArrowForInputSelectEquipmentChip = NULL;
    this->ArrowForInputSelectEquipmentSlot = NULL;
    this->HighlightMaskDescription = NULL;
    this->HighlightMaskToEquipment = NULL;
    this->HighlightMaskSelectEquipment = NULL;
    this->TutorialButtonDescription = NULL;
    this->ToPurchaseArea = NULL;
    this->ToPurchaseAnimation = NULL;
    this->ToEquipmentAnimation = NULL;
    this->OpenPurchaseAnimation = NULL;
    this->OpenEquipmentAnimation = NULL;
    this->ToPurchaseButtonHoveredAnimation = NULL;
    this->ToEquipmentButtonHoveredAnimation = NULL;
}

void UHbkStoreMenuChipsWidget::OnHoveredToPurchaseButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuChipsWidget::OnHoveredToEquipmentButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuChipsWidget::OnFinishMoveAnimation() {
}

void UHbkStoreMenuChipsWidget::OnClickedToPurchaseButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuChipsWidget::OnClickedToEquipmentButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStoreMenuChipsWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}


