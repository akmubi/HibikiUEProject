#include "HbkForwardSpotLight.h"
#include "HbkForwardSpotLightComponent.h"

AHbkForwardSpotLight::AHbkForwardSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkForwardSpotLightComponent>(TEXT("LightComponent0"));
    this->Tags.AddDefaulted(1);
    this->LightComponent = (UHbkForwardLightComponent*)RootComponent;
    this->SpotLightComponent = (UHbkForwardSpotLightComponent*)RootComponent;
}


