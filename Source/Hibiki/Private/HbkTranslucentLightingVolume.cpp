#include "HbkTranslucentLightingVolume.h"
#include "Engine/EngineTypes.h"
#include "HbkGameAgentComponent.h"
#include "HbkTranslucentLightingVolumeComponent.h"

AHbkTranslucentLightingVolume::AHbkTranslucentLightingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UHbkTranslucentLightingVolumeComponent>(TEXT("TranslucentLightingVolumeComponent"));
    this->TranslucentLightingVolumeComponent = (UHbkTranslucentLightingVolumeComponent*)RootComponent;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}


