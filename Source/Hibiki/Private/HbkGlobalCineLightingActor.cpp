#include "HbkGlobalCineLightingActor.h"
#include "HbkGlobalCharaLightingComponent.h"

AHbkGlobalCineLightingActor::AHbkGlobalCineLightingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkGlobalCharaLightingComponent>(TEXT("HbkGlobalCineLightingComponent"));
    this->HbkGlobalCharaLightingComponent = (UHbkGlobalCharaLightingComponent*)RootComponent;
}


