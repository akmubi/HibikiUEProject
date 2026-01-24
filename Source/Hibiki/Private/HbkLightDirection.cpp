#include "HbkLightDirection.h"
#include "Components/SceneComponent.h"

AHbkLightDirection::AHbkLightDirection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
}


