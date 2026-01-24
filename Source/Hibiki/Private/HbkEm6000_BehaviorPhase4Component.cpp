#include "HbkEm6000_BehaviorPhase4Component.h"

UHbkEm6000_BehaviorPhase4Component::UHbkEm6000_BehaviorPhase4Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchroSignalComponent = NULL;
    this->StageHatchComponent = NULL;
    this->DamageAmountForTriggerHatchIn = 50.00f;
    this->ElapsedTimeForTriggerHatchIn = 10.00f;
    this->DamageCountForWaitSignal = 1;
    this->LatticeLaserModeRapidFireWaitMoveNoteCount = 4;
    this->LatticeLaserModeRapidFireWaitActivateNoteCount = 8;
}

void UHbkEm6000_BehaviorPhase4Component::OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue) {
}

void UHbkEm6000_BehaviorPhase4Component::OnPlayerEnteredCurrentHatchSideEvent() {
}

bool UHbkEm6000_BehaviorPhase4Component::OnMultiEventForHatchInTrigger() {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnDamageCountEventForWaitHatchInSignal() {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForLaserActivateStart(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForLaserActivateEnd(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchOutStart(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchOutEnd(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchMoveStart_RapidFire(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchMoveEnd_RapidFire(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchInStart(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase4Component::OnActionEventForHatchInEnd(float DeltaTime, float ElapsedTime) {
    return false;
}


