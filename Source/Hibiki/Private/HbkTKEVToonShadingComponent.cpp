#include "HbkTKEVToonShadingComponent.h"

UHbkTKEVToonShadingComponent::UHbkTKEVToonShadingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = false;
    this->bOverride_ShadeDirection = false;
    this->UpAxisRot = -40.00f;
    this->RightAxisRot = 40.00f;
    this->FaceShadowComponent = NULL;
}


