#include "HbkCineDynamicShadowsActor.h"
#include "Engine/EngineTypes.h"
#include "HbkCineDynamicShadowsComponent.h"

AHbkCineDynamicShadowsActor::AHbkCineDynamicShadowsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UHbkCineDynamicShadowsComponent>(TEXT("CineDynamicShadowsComponent"));
    this->CineDynamicShadowsComponent = (UHbkCineDynamicShadowsComponent*)RootComponent;
}


