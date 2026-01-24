#include "HbkPlayerAutoActionTarget.h"
#include "Components/SceneComponent.h"

AHbkPlayerAutoActionTarget::AHbkPlayerAutoActionTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
}

void AHbkPlayerAutoActionTarget::SetTargetActiveState(bool bEnable) {
}


