#include "HbkGlobalCharaLightingComponent.h"

UHbkGlobalCharaLightingComponent::UHbkGlobalCharaLightingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SPAWN_INDEX = 0;
    this->bOverrideHbkRotZ = false;
    this->HbkRotZ = -40.00f;
    this->bOverrideHbkRotY = false;
    this->HbkRotY = 40.00f;
    this->bOverrideBackLitThreshold = false;
    this->BackLitThreshold = 0.90f;
    this->bOverrideBackLitRimThreshold = false;
    this->BackLitRimThreshold = 0.20f;
    this->bOverrideBackLitRimPow = false;
    this->BackLitRimPow = 2.00f;
    this->bOverrideLitColorChara = false;
    this->bOverrideShadowColorChara = false;
    this->bOverrideSpecularColorChara = false;
    this->bOverrideAmbientLitColorChara = false;
    this->bOverrideAmbientShadowColorChara = false;
    this->bOverrideAmbientLitColorAddChara = false;
    this->bOverrideAmbientShadowColorAddChara = false;
    this->bOverrideCharaEmissiveIntensity = false;
    this->CharaEmissiveIntensity = 1.00f;
    this->bOverrideShadowSpotLightType = false;
    this->ShadowSpotLightType = EHbkShadowSpotLightType::EnvKeyLight;
    this->SceneShadowSpotLight = NULL;
    this->CineToonShadingLight = NULL;
    this->bOverrideShadowRotZ = false;
    this->ShadowRotZ = 0.00f;
    this->bOverrideShadowRotY = false;
    this->ShadowRotY = 0.00f;
    this->bOverrideCapsuleShadowRotZ = false;
    this->CapsuleShadowRotZ = 0.00f;
    this->bOverrideCapsuleShadowRotY = false;
    this->CapsuleShadowRotY = 0.00f;
}


