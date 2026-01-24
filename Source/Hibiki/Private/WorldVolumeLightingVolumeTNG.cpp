#include "WorldVolumeLightingVolumeTNG.h"
#include "WorldVolumeLightingVolumeComponentTNG.h"

AWorldVolumeLightingVolumeTNG::AWorldVolumeLightingVolumeTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWorldVolumeLightingVolumeComponentTNG>(TEXT("WorldVolumeLightingVolumeComponentTNG"));
    this->WorldVolumeLightingVolumeComponent = (UWorldVolumeLightingVolumeComponentTNG*)RootComponent;
}


