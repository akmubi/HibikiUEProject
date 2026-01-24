#include "HbkSoloLightingVolume.h"
#include "Engine/EngineTypes.h"
#include "HbkSoloLightingVolumeComponent.h"

AHbkSoloLightingVolume::AHbkSoloLightingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->LightComponent = CreateDefaultSubobject<UHbkSoloLightingVolumeComponent>(TEXT("LightComponent0"));
}


