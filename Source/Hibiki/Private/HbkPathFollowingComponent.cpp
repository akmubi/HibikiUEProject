#include "HbkPathFollowingComponent.h"

UHbkPathFollowingComponent::UHbkPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCharacterAnimInstanceComp = NULL;
    this->bIsRootMotionNav = false;
}


