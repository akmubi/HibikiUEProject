#include "HbkExponentialHeightFogTableRow.h"

FHbkExponentialHeightFogTableRow::FHbkExponentialHeightFogTableRow() {
    this->FogCutoffDistance = 0.00f;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->FogDensity2 = 0.00f;
    this->FogHeightFalloff2 = 0.00f;
    this->FogHeightOffset = 0.00f;
    this->FogInscatteringColor = FLinearColor(FColor(0));
}

