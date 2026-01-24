#include "HbkPhotoModePostProcessOutlineData.h"

FHbkPhotoModePostProcessOutlineData::FHbkPhotoModePostProcessOutlineData() {
    this->bOutlineEnable = false;
    this->OutlineType = EHbkPhotoModeOutlineType::Canny;
    this->OutlineLumThreshold = 0.00f;
}

