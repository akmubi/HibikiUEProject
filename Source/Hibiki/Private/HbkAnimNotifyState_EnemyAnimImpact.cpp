#include "HbkAnimNotifyState_EnemyAnimImpact.h"

UHbkAnimNotifyState_EnemyAnimImpact::UHbkAnimNotifyState_EnemyAnimImpact() {
    this->SyncNote = EHbkNote::None;
    this->AnimImpactDuration = 0.01f;
    this->AnimImpactTimer = 0.00f;
}

void UHbkAnimNotifyState_EnemyAnimImpact::OnEventEx(int32 NoteCount, bool bOnBeat) const {
}

void UHbkAnimNotifyState_EnemyAnimImpact::OnEvent(int32 NoteCount) const {
}


