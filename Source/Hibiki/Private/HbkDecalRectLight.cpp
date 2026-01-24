#include "HbkDecalRectLight.h"
#include "HbkDecalRectLightComponent.h"

AHbkDecalRectLight::AHbkDecalRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDecalRectLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UHbkDecalLightComponent*)RootComponent;
    this->RectLightComponent = (UHbkDecalRectLightComponent*)RootComponent;
}


