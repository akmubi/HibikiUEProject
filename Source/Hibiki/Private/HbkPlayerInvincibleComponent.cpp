#include "HbkPlayerInvincibleComponent.h"

UHbkPlayerInvincibleComponent::UHbkPlayerInvincibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvisibleTime = 0.05f;
    this->VisibleTime = 0.08f;
    this->DParryInvisibleEffect = NULL;
}


