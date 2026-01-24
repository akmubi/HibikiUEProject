#include "HbkBeatHitComponent.h"

UHbkBeatHitComponent::UHbkBeatHitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeatHitDataAsset = NULL;
}

void UHbkBeatHitComponent::OnNextBeat(int32 NoteCount) {
}

void UHbkBeatHitComponent::OnImpactForBeatHit(int32 NoteCount) {
}


