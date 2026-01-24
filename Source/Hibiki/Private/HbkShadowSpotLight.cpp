#include "HbkShadowSpotLight.h"
#include "HbkShadowSpotLightComponent.h"

AHbkShadowSpotLight::AHbkShadowSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkShadowSpotLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (UHbkShadowSpotLightComponent*)RootComponent;
}

void AHbkShadowSpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
}

void AHbkShadowSpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
}


