#include "HbkForwardPointLight.h"
#include "HbkForwardPointLightComponent.h"

AHbkForwardPointLight::AHbkForwardPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkForwardPointLightComponent>(TEXT("LightComponent0"));
    this->Tags.AddDefaulted(1);
    this->LightComponent = (UHbkForwardLightComponent*)RootComponent;
    this->PointLightComponent = (UHbkForwardPointLightComponent*)RootComponent;
}


