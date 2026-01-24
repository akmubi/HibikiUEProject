#include "HbkInitializeTaskActor.h"
#include "Components/SceneComponent.h"

AHbkInitializeTaskActor::AHbkInitializeTaskActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
}


