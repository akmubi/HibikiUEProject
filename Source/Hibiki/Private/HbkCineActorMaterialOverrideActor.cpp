#include "HbkCineActorMaterialOverrideActor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "HbkCineToonShadingComponent.h"

AHbkCineActorMaterialOverrideActor::AHbkCineActorMaterialOverrideActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->CineToonShadingComponent = CreateDefaultSubobject<UHbkCineToonShadingComponent>(TEXT("HbkCineToonShadingComponent"));
}


