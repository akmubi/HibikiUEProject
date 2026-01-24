#include "HbkReflectionVolume.h"
#include "HbkReflectionVolumeGameComponent.h"

AHbkReflectionVolume::AHbkReflectionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkReflectionVolumeGameComponent>(TEXT("HbkReflectionVolumeComponent"));
    this->HbkReflectionVolumeComponent = (UHbkReflectionVolumeGameComponent*)RootComponent;
}


