#include "HbkForwardLight.h"
#include "Engine/EngineTypes.h"
#include "HbkGameAgentComponent.h"

AHbkForwardLight::AHbkForwardLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->Tags.AddDefaulted(1);
    this->LightComponent = NULL;
    this->bUseClipPlane = false;
    this->ClipPlane = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveActivate = false;
}


