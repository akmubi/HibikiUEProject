#include "HbkCostumeItemListParentWidget.h"

UHbkCostumeItemListParentWidget::UHbkCostumeItemListParentWidget() {
    this->CharacterTab = NULL;
    this->ListSwicher = NULL;
    this->ChaiItemList = NULL;
    this->PartnerItemList = NULL;
    this->OwnerWidget = NULL;
    this->SelectCategoryAnim = NULL;
    this->SelectItemAnim = NULL;
}

void UHbkCostumeItemListParentWidget::PlayItemSelectAnim() {
}

void UHbkCostumeItemListParentWidget::PlayCategorySelectAnim() {
}

bool UHbkCostumeItemListParentWidget::ChangeCharacterDirect(EHbkPartnerType CharaType) {
    return false;
}


