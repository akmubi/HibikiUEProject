#include "HbkShadowSpotLightComponent.h"
#include "EHbkLightType.h"

UHbkShadowSpotLightComponent::UHbkShadowSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = true;
    this->CastStaticShadows = false;
    this->bAffectTranslucentLighting = false;
    this->bCastRaytracedShadow = false;
    this->bAffectReflection = false;
    this->bAffectGlobalIllumination = false;
    this->bCastShadowsFromCinematicObjectsOnly = true;
    // this->HbkLightType = EHbkLightType::Shadow4;
    this->MaxShadowLightDrawDistance = 3000.00f;
    this->MaxShadowLightDistanceFadeRange = 500.00f;
    this->bHbkVisibility = true;
}


