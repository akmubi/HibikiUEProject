#include "HbkAnimNotifyState_AttackSyncNote.h"

UHbkAnimNotifyState_AttackSyncNote::UHbkAnimNotifyState_AttackSyncNote() {
    this->SyncNote = EHbkNote::None;
    this->ImpactDelayNoteNum = 0;
    this->AttackSocketName = TEXT("Origin");
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->AttackComp = NULL;
}

void UHbkAnimNotifyState_AttackSyncNote::OnEventEx(int32 NoteCount, bool bOnBeat) const {
}

void UHbkAnimNotifyState_AttackSyncNote::OnEvent(int32 NoteCount) const {
}


