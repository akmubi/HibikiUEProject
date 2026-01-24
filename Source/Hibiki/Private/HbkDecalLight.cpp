#include "HbkDecalLight.h"
#include "Engine/EngineTypes.h"
#include "HbkGameAgentComponent.h"

AHbkDecalLight::AHbkDecalLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->LightComponent = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveActivate = false;
}


