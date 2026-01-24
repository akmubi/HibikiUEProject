#include "HbkPointLight.h"
#include "HbkPointLightComponent.h"

AHbkPointLight::AHbkPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkPointLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->PointLightComponent = (UHbkPointLightComponent*)RootComponent;
}

void AHbkPointLight::SetRadius(float NewRadius) {
}

void AHbkPointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
}


