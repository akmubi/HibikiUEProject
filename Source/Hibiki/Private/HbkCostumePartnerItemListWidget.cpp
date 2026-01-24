#include "HbkCostumePartnerItemListWidget.h"

UHbkCostumePartnerItemListWidget::UHbkCostumePartnerItemListWidget() {
    this->ItemWidgetClass = NULL;
    this->NowSelectItemWidget = NULL;
    this->CurrentPageType = EHbkCostumePageName::EquipPage;
    this->NowCurrentScrollBox = NULL;
    this->StoreBase_Scroll = NULL;
    this->EquipBase_Overlay = NULL;
    this->Equip_Scroll = NULL;
    this->StoreList = NULL;
    this->EquipList = NULL;
    this->SelectCostumeName = NULL;
    this->ListControl = NULL;
    this->OwnerListWidget = NULL;
}

void UHbkCostumePartnerItemListWidget::SetNowSelectItemWidget(UHbkCostumeSelectableBaseWidget* SelectItem) {
}


