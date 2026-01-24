#include "HbkLauncherComponent.h"

UHbkLauncherComponent::UHbkLauncherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->LaunchEffect = NULL;
}

void UHbkLauncherComponent::SingleLaunchWithParam(FHbkLaunchParam LaunchParam, AActor* Target, const FVector& SpawnPos) {
}

void UHbkLauncherComponent::SingleLaunch(int32 Index, AActor* Target, const FVector& SpawnPos) {
}

void UHbkLauncherComponent::RandomLaunch(AActor* Target, const FVector& SpawnPos) {
}

void UHbkLauncherComponent::PrepareRandomLaunch() {
}

void UHbkLauncherComponent::OnGridEvent(int32 NoteCount, bool bDownBeat) {
}

int32 UHbkLauncherComponent::GetRemainLaunchCount() const {
    return 0;
}


