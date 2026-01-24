#include "HbkCharaEnvLightingTableRow.h"

FHbkCharaEnvLightingTableRow::FHbkCharaEnvLightingTableRow() {
    this->bEnableForwardEnvLightingForChara = false;
    this->ForwardLightingCharaShadowThreshold = 0.00f;
    this->ForwardEnvLightingCharaBlendRatio = 0.00f;
    this->ForwardEnvLightingCharaBaseColorIntensity = 0.00f;
    this->ForwardEnvLightingCharaBaseColorMaxIntensity = 0.00f;
    this->ForwardEnvLightingCharaLightMaxIntensity = 0.00f;
    this->ForwardEnvLightingCharaIntensityMult = 0.00f;
    this->bForwardEnvLightingForCharaOnlyLit = false;
    this->bOverrideShadowColorCharacterAmbient = false;
    this->bDisableDeferredLightingOnChara = false;
    this->ShadowColorCharacterAmbient = FLinearColor();
}

