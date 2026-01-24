#include "HbkGraphicsComponent.h"

UHbkGraphicsComponent::UHbkGraphicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCharacterDynamicShadows3 = false;
    this->CharacterShadowOffset = 1000.00f;
}


