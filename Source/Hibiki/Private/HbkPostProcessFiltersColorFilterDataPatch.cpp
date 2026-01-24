#include "HbkPostProcessFiltersColorFilterDataPatch.h"

FHbkPostProcessFiltersColorFilterDataPatch::FHbkPostProcessFiltersColorFilterDataPatch() {
    this->ColorFilterType = EHbkPostProcessFiltersColorFilterTypePatch::SepiaTone;
    this->ColorSaturation = FLinearColor(FColor(0));
    this->ColorContrast = FLinearColor(FColor(0));
    this->ColorGamma = FLinearColor(FColor(0));
    this->ColorGain = FLinearColor(FColor(0));
    this->ColorOffset = FLinearColor(FColor(0));
}

