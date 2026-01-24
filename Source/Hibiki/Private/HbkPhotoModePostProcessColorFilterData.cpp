#include "HbkPhotoModePostProcessColorFilterData.h"

FHbkPhotoModePostProcessColorFilterData::FHbkPhotoModePostProcessColorFilterData() {
    this->bUseLUT = false;
    this->FilterType = EHbkPhotoModeColorFilterType::SepiaTone;
    this->LutTexture = NULL;
    this->ColorSaturation = FLinearColor(FColor(0));
    this->ColorContrast = FLinearColor(FColor(0));
    this->ColorGamma = FLinearColor(FColor(0));
    this->ColorGain = FLinearColor(FColor(0));
    this->ColorOffset = FLinearColor(FColor(0));
}

