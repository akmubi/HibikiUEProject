#include "HbkEnemyThrowComponent.h"

UHbkEnemyThrowComponent::UHbkEnemyThrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowNoteNum = 1;
    this->SpawnedActor = NULL;
}

void UHbkEnemyThrowComponent::StartThrow(AActor* Spawner, FVector Start, FVector To) {
}

bool UHbkEnemyThrowComponent::IsThrowing() const {
    return false;
}

FVector UHbkEnemyThrowComponent::GetCalcedLocation() {
    return FVector{};
}

void UHbkEnemyThrowComponent::EndThrow() {
}


