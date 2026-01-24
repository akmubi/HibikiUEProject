#include "HbkSoloLight.h"
#include "Engine/EngineTypes.h"

AHbkSoloLight::AHbkSoloLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->LightComponent = NULL;
}


