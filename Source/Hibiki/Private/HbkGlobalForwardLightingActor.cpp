#include "HbkGlobalForwardLightingActor.h"
#include "Components/SceneComponent.h"

AHbkGlobalForwardLightingActor::AHbkGlobalForwardLightingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HbkGlobalForwardLightingActor"));
    this->bUpdateCharaShadingForwardLightsEveryFrame = false;
}


