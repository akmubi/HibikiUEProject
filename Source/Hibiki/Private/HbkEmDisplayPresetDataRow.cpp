#include "HbkEmDisplayPresetDataRow.h"

FHbkEmDisplayPresetDataRow::FHbkEmDisplayPresetDataRow() {
    this->bUseNoiseMaterial = false;
    this->NoiseMaterial = NULL;
    this->DisplayTexture = NULL;
    this->ScrollType = EHbkEmDisplayScrollType::None;
    this->BackMaskTexture = NULL;
    this->BackMaskColor = FLinearColor(FColor(0));
    this->BackColor = FLinearColor(FColor(0));
    this->EyeColor = FLinearColor(FColor(0));
}

