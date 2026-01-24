#include "HbkEnginePostProcessVolume.h"
#include "HbkGameAgentComponent.h"

AHbkEnginePostProcessVolume::AHbkEnginePostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->OverrideDataTable = false;
    this->DirectionalLight = NULL;
    this->EnvShadeIntensity = 10.00f;
    this->EnvKeyLightLightIntensity = 0.00f;
    this->EnvKeyLightLightBaseColorRatio = 1.00f;
    this->EnvKeyLightShadowColorBaseColorBlendRatio = 1.00f;
    this->EnvKeyLightOriginalBaseColorBrightness = 1.00f;
    this->EnvKeyLightLightIntensityShade = 0.00f;
    this->EnvKeyLightLightBaseColorRatioShade = 1.00f;
    this->EnvKeyLightShadowColorBaseColorBlendRatioShade = 1.00f;
    this->EnvKeyLightOriginalBaseColorBrightnessShade = 1.00f;
    this->EnvKeyLightShadowMaxDistance = 20000.00f;
    this->EnvKeyLightShadowNumDynamicShadowCascades = 3;
    this->EnvKeyLightShadowThreshold = 0.10f;
    this->EnvKeyLightShadowResolutionXSX = 2048;
    this->bUseKeyLight2 = false;
    this->EnvForwardLightIntensity = 10.00f;
    this->SpecularLightDirPitchOffset = 0.00f;
    this->SpecularLightDirYawOffset = 0.00f;
    this->EnvEmissiveIntensity = 1.00f;
    this->ProbeGiIntensity = 1.00f;
    this->bEnableReflection = true;
    this->SpecialLightDirection = NULL;
    this->ShadowSpotLightType = EHbkShadowSpotLightType::EnvKeyLight;
    this->SceneShadowSpotLight = NULL;
    this->PlayerShadowOffset = 1000.00f;
    this->PlayerShadowLength = 160.00f;
    this->PlayerShadowDarknessScale = 0.40f;
    this->PlayerShadowRadiusAttenPow = 2.00f;
    this->PlayerShadowLengthFreq = 800.00f;
    this->PlayerShadowThreshold = 0.10f;
    this->PlayerShadowColorInsideMainLightShadow = false;
    this->PlayerShadowColorInsideShadeShadow = true;
    this->ExponentialHeightFog = NULL;
    this->FoliageDensityXboxSeriesS = 0.50f;
    this->Priority = 0.00f;
    this->bEnabled = true;
    this->bUnbound = false;
    this->BlendInTime = 0.00f;
    this->BlendInTimeCurve = NULL;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->GameEnvStateEnginePPV = NULL;
    this->bSaveType = EHbkEnginePostProcessVolume_SaveType::SAVE_NONE;
}

bool AHbkEnginePostProcessVolume::EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) {
    return false;
}

FPostProcessVolumeProperties AHbkEnginePostProcessVolume::GetProperties() const {
    return FPostProcessVolumeProperties();
}