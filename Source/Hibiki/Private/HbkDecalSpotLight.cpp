#include "HbkDecalSpotLight.h"
#include "HbkDecalSpotLightComponent.h"

AHbkDecalSpotLight::AHbkDecalSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDecalSpotLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UHbkDecalLightComponent*)RootComponent;
    this->SpotLightComponent = (UHbkDecalSpotLightComponent*)RootComponent;
}


