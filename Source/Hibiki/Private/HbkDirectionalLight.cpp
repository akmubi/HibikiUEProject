#include "HbkDirectionalLight.h"
#include "HbkDirectionalLightComponent.h"

AHbkDirectionalLight::AHbkDirectionalLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkDirectionalLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->DirectionalLightComponent = (UHbkDirectionalLightComponent*)RootComponent;
}


