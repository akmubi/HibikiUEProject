#include "HbkLocalFogVolume.h"
#include "HbkStaticMeshComponent.h"

AHbkLocalFogVolume::AHbkLocalFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->FogFarOpacity = 1.00f;
    this->FogMidOpacity = 0.50f;
    this->FogNearOpacity = 0.00f;
    this->FogMidOpacityPoint = 0.50f;
    this->FogNearOpacityPoint = 0.00f;
    this->DistanceFadeStart = -1.00f;
    this->DistanceFadeFadeDistance = 0.00f;
    this->bIsCutsceneLocalFog = false;
    this->MeshComponent = (UHbkStaticMeshComponent*)RootComponent;
}


