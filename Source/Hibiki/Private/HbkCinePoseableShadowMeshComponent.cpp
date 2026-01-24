#include "HbkCinePoseableShadowMeshComponent.h"

UHbkCinePoseableShadowMeshComponent::UHbkCinePoseableShadowMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastStaticShadow = false;
    this->bCastHiddenShadow = true;
    this->CanCharacterStepUpOn = ECB_No;
}


