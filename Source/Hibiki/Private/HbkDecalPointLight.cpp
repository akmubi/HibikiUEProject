#include "HbkDecalPointLight.h"
#include "HbkDecalPointLightComponent.h"

AHbkDecalPointLight::AHbkDecalPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDecalPointLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UHbkDecalLightComponent*)RootComponent;
    this->PointLightComponent = (UHbkDecalPointLightComponent*)RootComponent;
}


