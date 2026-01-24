#include "HbkPhotoMenuListItem_SliderWidget.h"

UHbkPhotoMenuListItem_SliderWidget::UHbkPhotoMenuListItem_SliderWidget() {
    this->SettingParts = NULL;
    this->AvairablePanel = NULL;
    this->TitleTextBox = NULL;
    this->ValueType = EHbkPhotoModeSettingType::NumSlider;
    this->MinSliderValue = 0.00f;
    this->MaxSliderValue = 100.00f;
    this->OneMoveSliderValue = 1.00f;
    this->FastOneMoveSliderValue = 5.00f;
    this->DefaultSliderValue = 0.00f;
    this->isLoopList = true;
    this->MaxListValue = 0;
    this->DefaultListIndex = 0;
    this->AddIndexNum = false;
}


