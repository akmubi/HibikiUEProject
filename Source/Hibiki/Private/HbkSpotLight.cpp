#include "HbkSpotLight.h"
#include "HbkSpotLightComponent.h"

AHbkSpotLight::AHbkSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkSpotLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (UHbkSpotLightComponent*)RootComponent;
}

void AHbkSpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
}

void AHbkSpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
}


