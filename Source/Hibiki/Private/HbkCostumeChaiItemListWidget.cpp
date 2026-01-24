#include "HbkCostumeChaiItemListWidget.h"

UHbkCostumeChaiItemListWidget::UHbkCostumeChaiItemListWidget() {
    this->ItemWidgetClass = NULL;
    this->ScrollOffsetThreshold = 0.00f;
    this->NowSelectItemWidget = NULL;
    this->CurrentPageType = EHbkCostumePageName::EquipPage;
    this->NowPart = EHbkCostumePart::Head;
    this->ScrollTop_Store = NULL;
    this->ScrollTop_Equip = NULL;
    this->Equip_HairBase = NULL;
    this->Equip_InnerBase = NULL;
    this->Equip_JacketBase = NULL;
    this->Equip_ScarfBase = NULL;
    this->Equip_BottomsBase = NULL;
    this->Equip_ShoesBase = NULL;
    this->Equip_SetItemBase = NULL;
    this->Equip_RoboticArmBase = NULL;
    this->Equip_AccessoryBase = NULL;
    this->Equip_GuitarBase = NULL;
    this->StoreBase_Scroll = NULL;
    this->Store_HairList = NULL;
    this->Store_InnerList = NULL;
    this->Store_JacketList = NULL;
    this->Store_ScarfList = NULL;
    this->Store_BottomsList = NULL;
    this->Store_ShoesList = NULL;
    this->Store_SetItemList = NULL;
    this->Store_RoboticArmList = NULL;
    this->Store_AccessoryList = NULL;
    this->Store_GuitarList = NULL;
    this->EquipBase_Overlay = NULL;
    this->Equip_Scroll = NULL;
    this->Equip_HairList = NULL;
    this->Equip_InnerList = NULL;
    this->Equip_JacketList = NULL;
    this->Equip_ScarfList = NULL;
    this->Equip_BottomsList = NULL;
    this->Equip_ShoesList = NULL;
    this->Equip_SetItemList = NULL;
    this->Equip_RoboticArmList = NULL;
    this->Equip_AccessoryList = NULL;
    this->Equip_GuitarList = NULL;
    this->ListControl = NULL;
    this->SelectCostumeName = NULL;
}

void UHbkCostumeChaiItemListWidget::SetNowSelectItemWidget(UHbkCostumeSelectableBaseWidget* SelectItem) {
}


