#include "HbkLightClipPlane.h"
#include "Components/SceneComponent.h"

AHbkLightClipPlane::AHbkLightClipPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
}


