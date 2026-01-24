#include "HbkPostProcessLensFlare.h"
#include "Engine/EngineTypes.h"
#include "HbkPostProcessLensFlareComponent.h"

AHbkPostProcessLensFlare::AHbkPostProcessLensFlare(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UHbkPostProcessLensFlareComponent>(TEXT("LensFlareComponent0"));
    this->LensFlareComponent = (UHbkPostProcessLensFlareComponent*)RootComponent;
}

void AHbkPostProcessLensFlare::BeginFadeOut() {
}


