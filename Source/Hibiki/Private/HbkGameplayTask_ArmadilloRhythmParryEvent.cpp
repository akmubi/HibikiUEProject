#include "HbkGameplayTask_ArmadilloRhythmParryEvent.h"

UHbkGameplayTask_ArmadilloRhythmParryEvent::UHbkGameplayTask_ArmadilloRhythmParryEvent() {
    this->SuccessAk = NULL;
    this->FailedAk = NULL;
}

void UHbkGameplayTask_ArmadilloRhythmParryEvent::Recieve_StartToLeaveMap() {
}

void UHbkGameplayTask_ArmadilloRhythmParryEvent::OnSuccessInstantKillBeatHit() {
}

void UHbkGameplayTask_ArmadilloRhythmParryEvent::OnOneBeatInstantKillBeatHit() {
}

void UHbkGameplayTask_ArmadilloRhythmParryEvent::OnFailedInstantKillBeatHit() {
}

void UHbkGameplayTask_ArmadilloRhythmParryEvent::OnEnemyDied() {
}

UHbkGameplayTask_ArmadilloRhythmParryEvent* UHbkGameplayTask_ArmadilloRhythmParryEvent::ArmadilloRhythmParryEvent(UObject* WorldContextObject, UAkAudioEvent* SuccessAkEvent, UAkAudioEvent* FailedAkEvent) {
    return NULL;
}


