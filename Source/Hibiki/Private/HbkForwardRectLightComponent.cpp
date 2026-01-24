#include "HbkForwardRectLightComponent.h"

UHbkForwardRectLightComponent::UHbkForwardRectLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSingleDirectionShading = false;
    this->SourceWidth = 64.00f;
    this->SourceHeight = 64.00f;
}


