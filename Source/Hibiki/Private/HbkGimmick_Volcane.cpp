#include "HbkGimmick_Volcane.h"

AHbkGimmick_Volcane::AHbkGimmick_Volcane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VolcaneBombSpawnComp = NULL;
    this->bSaved = false;
    this->bActive = false;
    this->bSizedUp = false;
    this->CurrentVolcaneEruption = NULL;
    this->ReservedVolcaneEruption = NULL;
}

void AHbkGimmick_Volcane::SetSignCount(int32 Count) {
}

void AHbkGimmick_Volcane::SetEruptionSignCount(int32 Count) {
}

void AHbkGimmick_Volcane::SetActivityCount(int32 FirstCount, int32 NextCount) {
}

void AHbkGimmick_Volcane::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_Volcane::OnPostResetPlayerPosition(const FTransform& Transform, const FGameplayTagContainer& RestartPointTags) {
}

void AHbkGimmick_Volcane::OnEruptionStart(const FString& UserString) {
}

void AHbkGimmick_Volcane::OnEndSpecialAttack() {
}

void AHbkGimmick_Volcane::OnEndRhythmParryAttack() {
}

void AHbkGimmick_Volcane::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGimmick_Volcane::OnEndJamComboAttack() {
}


void AHbkGimmick_Volcane::OnBeginSpecialAttack(bool bIncludingCamera) {
}

void AHbkGimmick_Volcane::OnBeginRhythmParryAttack() {
}

void AHbkGimmick_Volcane::OnBeginJamComboAttack() {
}

void AHbkGimmick_Volcane::NoteSyncWhole(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_Volcane::NoteSyncQuarter(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_Volcane::NoteSyncHalf(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_Volcane::NoteSync8th(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_Volcane::NoteSync16th(int32 noteCnt, bool bDownBeat) {
}

EHbkGimmick_VolcaneAnimState AHbkGimmick_Volcane::GetAnimState() const {
    return EHbkGimmick_VolcaneAnimState::None;
}

void AHbkGimmick_Volcane::DisableAimPlayer(int32 noteCnt, bool bDownBeat) {
}


