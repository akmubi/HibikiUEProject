#include "HbkDecalBoxLight.h"
#include "HbkDecalBoxLightComponent.h"

AHbkDecalBoxLight::AHbkDecalBoxLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDecalBoxLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UHbkDecalLightComponent*)RootComponent;
    this->BoxLightComponent = (UHbkDecalBoxLightComponent*)RootComponent;
}


