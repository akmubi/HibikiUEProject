#include "HbkKorsicaGimmickComponent.h"

UHbkKorsicaGimmickComponent::UHbkKorsicaGimmickComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PattarnNum = EHbkKorsicaRhythmPattarnNum::None;
}

void UHbkKorsicaGimmickComponent::RemoveWidget() {
}

EHbkKorsicaGimmickProgress UHbkKorsicaGimmickComponent::GetGimmickProgress() {
    return EHbkKorsicaGimmickProgress::None;
}

bool UHbkKorsicaGimmickComponent::BeginMinigame(EHbkKorsicaRhythmPattarnNum Pattarn) {
    return false;
}


