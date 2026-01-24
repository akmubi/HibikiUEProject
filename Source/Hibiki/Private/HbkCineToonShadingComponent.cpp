#include "HbkCineToonShadingComponent.h"

UHbkCineToonShadingComponent::UHbkCineToonShadingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CineToonShadingLight1 = TEXT("None1234");
    this->CineToonShadingLight2 = TEXT("None1234");
    this->CineToonShadingLight3 = TEXT("None1234");
    this->CineToonShadingLight4 = TEXT("None1234");
    this->FaceShadowComponent = NULL;
    this->ActiveEditorMaterialSlotIndex = 0;
    this->ActorToOverride = NULL;
}


