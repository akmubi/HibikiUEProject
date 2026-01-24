#include "HbkGameplayTask_BossQTE.h"

UHbkGameplayTask_BossQTE::UHbkGameplayTask_BossQTE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGameplayTask_BossQTE::StartBeatHitWhenQuarter(int32 NextCount) {
}

void UHbkGameplayTask_BossQTE::StartBeatHitUI() {
}

void UHbkGameplayTask_BossQTE::SetNextNoteCoundDownSE(UAkAudioEvent* AkEvent) {
}

void UHbkGameplayTask_BossQTE::SetInputfailure() {
}

void UHbkGameplayTask_BossQTE::SetAdjustPlayRate(int32 CutLengthNote) {
}

void UHbkGameplayTask_BossQTE::ResetPlayRate(bool bSyncBPM) {
}

void UHbkGameplayTask_BossQTE::ReachImpactFrame() {
}

UHbkGameplayTask_BossQTE* UHbkGameplayTask_BossQTE::PlayBossQTE(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, const FHbkBossQTESequenceInfo QTEInfo, AHbkBossCharacterBase* BossActor) {
    return NULL;
}

void UHbkGameplayTask_BossQTE::OnSequenceStopped() {
}

void UHbkGameplayTask_BossQTE::OnSequenceFinished() {
}

void UHbkGameplayTask_BossQTE::OnQuarterForSE(int32 NoteCount, bool bOnBeat) {
}

void UHbkGameplayTask_BossQTE::OnQuarterForBH(int32 NoteCount, bool bOnBeat) {
}

void UHbkGameplayTask_BossQTE::OnInputSuccess(bool bPerfect) {
}

void UHbkGameplayTask_BossQTE::OnInputFailure() {
}


