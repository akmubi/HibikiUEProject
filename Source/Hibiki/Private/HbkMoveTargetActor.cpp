#include "HbkMoveTargetActor.h"
#include "Components/SceneComponent.h"

AHbkMoveTargetActor::AHbkMoveTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void AHbkMoveTargetActor::ShowDebug() {
}

void AHbkMoveTargetActor::SetOwnerPawn(AHbkCharacter* NewOwner) {
}

float AHbkMoveTargetActor::GetDistToOwnerPawn(bool DistIs2D) {
    return 0.0f;
}


