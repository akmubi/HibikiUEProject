#include "HbkForwardRectLight.h"
#include "HbkForwardRectLightComponent.h"

AHbkForwardRectLight::AHbkForwardRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkForwardRectLightComponent>(TEXT("LightComponent0"));
    this->Tags.AddDefaulted(1);
    this->LightComponent = (UHbkForwardLightComponent*)RootComponent;
    this->RectLightComponent = (UHbkForwardRectLightComponent*)RootComponent;
}


