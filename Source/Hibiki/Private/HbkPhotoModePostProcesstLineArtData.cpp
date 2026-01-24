#include "HbkPhotoModePostProcesstLineArtData.h"

FHbkPhotoModePostProcesstLineArtData::FHbkPhotoModePostProcesstLineArtData() {
    this->PresetType = EHbkPhotoModeLineArtFilterType::Default;
    this->bUseLineArtColorThreshold = false;
    this->LineArtColorThreshold = 0.00f;
    this->LineArtSaturation = 0.00f;
}

