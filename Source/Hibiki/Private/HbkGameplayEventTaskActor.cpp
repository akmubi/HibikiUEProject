#include "HbkGameplayEventTaskActor.h"
#include "Components/SceneComponent.h"

AHbkGameplayEventTaskActor::AHbkGameplayEventTaskActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->GameplayEventAssetInfo = NULL;
}


