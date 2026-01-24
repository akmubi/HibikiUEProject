#include "HbkDecalLightDecalVolume.h"
#include "HbkDecalLightDecalVolumeComponent.h"

AHbkDecalLightDecalVolume::AHbkDecalLightDecalVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDecalLightDecalVolumeComponent>(TEXT("DecalLightDecalVolumeComponent"));
    this->DecalLightDecalVolumeComponent = (UHbkDecalLightDecalVolumeComponent*)RootComponent;
}


