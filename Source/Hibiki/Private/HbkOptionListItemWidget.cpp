#include "HbkOptionListItemWidget.h"

UHbkOptionListItemWidget::UHbkOptionListItemWidget() {
    this->SettingType = EHbkOptionSettingType::None;
    this->ItemType = EHbkOptionListItemType::None;
    this->SliderMin = 0;
    this->SliderMax = 100;
    this->SliderAmount = 10;
    this->SettingValueCustomFont = NULL;
    this->SettingValue = NULL;
}


