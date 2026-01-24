#include "HbkSoloSpotLight.h"
#include "HbkSoloSpotLightComponent.h"

AHbkSoloSpotLight::AHbkSoloSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkSoloSpotLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UHbkSoloLightComponent*)RootComponent;
    this->SpotLightComponent = (UHbkSoloSpotLightComponent*)RootComponent;
}


