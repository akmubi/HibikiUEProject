#include "HbkBossAttackIntervalComponent.h"

UHbkBossAttackIntervalComponent::UHbkBossAttackIntervalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoteDefault = EHbkNote::None;
    this->NoteCountDefault = 0;
    this->bPermitAttack = true;
    this->IntervalNote = EHbkNote::None;
    this->IntervalNoteCount = 0;
    this->ElapsedNoteCount = 0;
}

void UHbkBossAttackIntervalComponent::SetAttackInterval(EHbkNote Note, int32 NoteCount) {
}

void UHbkBossAttackIntervalComponent::ResetAttackInterval() {
}

void UHbkBossAttackIntervalComponent::OnBeatEventEx(int32 NoteCount, bool downBeat) {
}

void UHbkBossAttackIntervalComponent::OnBeatEvent(int32 NoteCount) {
}

bool UHbkBossAttackIntervalComponent::IsPermitAttack() const {
    return false;
}

void UHbkBossAttackIntervalComponent::ForcePermitAttack() {
}


