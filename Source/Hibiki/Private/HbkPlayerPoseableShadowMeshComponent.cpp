#include "HbkPlayerPoseableShadowMeshComponent.h"
#include "EHbkCharacterShadowType2.h"
#include "EHbkDynamicShadowMapType.h"

UHbkPlayerPoseableShadowMeshComponent::UHbkPlayerPoseableShadowMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->bReceivesDecals = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastStaticShadow = false;
    this->bCastContactShadow = false;
    this->bCastCinematicShadow = true;
    // this->bCastCinematicShadowOnlyTNG = true;
    this->HbkCharacterShadowType = EHbkCharacterShadowType2::DynamicShadowMap;
    this->HbkDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapPlayer;
}


