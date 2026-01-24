#include "HbkRectLight.h"
#include "HbkRectLightComponent.h"

AHbkRectLight::AHbkRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkRectLightComponent>(TEXT("LightComponent0"));
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->RectLightComponent = (UHbkRectLightComponent*)RootComponent;
}


