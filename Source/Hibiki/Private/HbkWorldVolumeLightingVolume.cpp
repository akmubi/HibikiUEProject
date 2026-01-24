#include "HbkWorldVolumeLightingVolume.h"
#include "HbkGameAgentComponent.h"
#include "HbkWorldVolumeLightingVolumeComponent.h"

AHbkWorldVolumeLightingVolume::AHbkWorldVolumeLightingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkWorldVolumeLightingVolumeComponent>(TEXT("WorldVolumeLightingVolumeComponentTNG"))) {
    this->Tags.AddDefaulted(1);
    this->WorldVolumeLightingVolumeComponent = (UWorldVolumeLightingVolumeComponentTNG*)RootComponent;
    this->HbkWorldVolumeLightingVolumeComponent = (UHbkWorldVolumeLightingVolumeComponent*)RootComponent;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->bSaveActivate = false;
}


