#include "HbkEnginePostProcessVolumePhase.h"

FHbkEnginePostProcessVolumePhase::FHbkEnginePostProcessVolumePhase() {
    this->bOverrideDirectionalLight = false;
    this->DirectionalLight = NULL;
    this->bOverrideEnvShadeIntensity = false;
    this->EnvShadeIntensity = 0.00f;
    this->bOverrideEnvKeyLightLightColor = false;
    this->bOverrideEnvKeyLightLightIntensity = false;
    this->EnvKeyLightLightIntensity = 0.00f;
    this->bOverrideEnvKeyLightLightBaseColorRatio = false;
    this->EnvKeyLightLightBaseColorRatio = 0.00f;
    this->bOverrideEnvKeyLightShadowColor = false;
    this->bOverrideEnvKeyLightShadowColorBaseColorBlendRatio = false;
    this->EnvKeyLightShadowColorBaseColorBlendRatio = 0.00f;
    this->bOverrideEnvKeyLightOriginalBaseColorBrightness = false;
    this->EnvKeyLightOriginalBaseColorBrightness = 0.00f;
    this->bOverrideEnvKeyLightLightColorShade = false;
    this->bOverrideEnvKeyLightLightIntensityShade = false;
    this->EnvKeyLightLightIntensityShade = 0.00f;
    this->bOverrideEnvKeyLightLightBaseColorRatioShade = false;
    this->EnvKeyLightLightBaseColorRatioShade = 0.00f;
    this->bOverrideEnvKeyLightShadowColorShade = false;
    this->bOverrideEnvKeyLightShadowColorBaseColorBlendRatioShade = false;
    this->EnvKeyLightShadowColorBaseColorBlendRatioShade = 0.00f;
    this->bOverrideEnvKeyLightOriginalBaseColorBrightnessShade = false;
    this->EnvKeyLightOriginalBaseColorBrightnessShade = 0.00f;
    this->bOverrideExponentialHeightFogTableRowHandle = false;
    this->bOverrideCustomHeightFogTableRowHandle = false;
    this->EnvKeyLightLightColor = FColor(0);
    this->EnvKeyLightShadowColor = FColor(0);
    this->EnvKeyLightLightColorShade = FColor(0);
    this->EnvKeyLightShadowColorShade = FColor(0);
}

