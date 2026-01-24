#include "HbkEnemyBiAttackComponent.h"

UHbkEnemyBiAttackComponent::UHbkEnemyBiAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncNote = EHbkNote::Note_16th;
    this->DamageTypeBegin = NULL;
    this->DamageTypeContinuous = NULL;
    this->DamageTypeFinish = NULL;
    this->ChaseNoteCount = 1;
    this->ImpactDelayNoteNum = 1;
    this->ImpactCount = 1;
    this->AttackAnimation = NULL;
    this->AttackAnimLoopSectionName = TEXT("Loop");
    this->AttackAnimEndSectionName = TEXT("End");
}

void UHbkEnemyBiAttackComponent::OnSyncPrepare() {
}

void UHbkEnemyBiAttackComponent::OnBiEventEx(int32 NoteCount, bool bOnBeat) {
}

void UHbkEnemyBiAttackComponent::OnBiEvent(int32 NoteCount) {
}

void UHbkEnemyBiAttackComponent::ExecuteBiAttack() {
}

void UHbkEnemyBiAttackComponent::ChaseTargetUpdateOnBeatEx(int32 NoteCount, bool bOnBeat) {
}

void UHbkEnemyBiAttackComponent::ChaseTargetUpdateOnBeat(int32 NoteCount) {
}

void UHbkEnemyBiAttackComponent::CancelAttack() {
}


