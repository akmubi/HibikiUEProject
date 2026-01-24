#include "HbkPhotoModePostProcessPresetData.h"

FHbkPhotoModePostProcessPresetData::FHbkPhotoModePostProcessPresetData() {
    this->PresetType = EHbkPhotoModePresetType::Default;
    this->BackgroundLayerPreset = EHbkPhotoModePostProcessLayerType::Default;
    this->ForegroundLayerPreset = EHbkPhotoModePostProcessLayerType::Default;
    this->GlobalLayerPreset = EHbkPhotoModePostProcessGlobalLayerType::Default;
}

