#include "HbkTutorialManager.h"

UHbkTutorialManager::UHbkTutorialManager() {
    this->JustTimingRange = 0.10f;
    this->GoodTimingRange = 0.50f;
    this->FailedTimingRange = 0.50f;
    this->TutorialWidgetClass = NULL;
    this->RecoveryTutorial_BP = NULL;
    this->BatteryTutorial_BP = NULL;
    this->GearTutorial_BP = NULL;
    this->OverChargeTutorial_BP = NULL;
    this->ScoreCallEvent = NULL;
}

void UHbkTutorialManager::Update(float DeltaTime) {
}

void UHbkTutorialManager::SetTutorialResult(EHbkTutorialResultType Result) {
}

void UHbkTutorialManager::SetThroughUserCue(bool Through) {
}

void UHbkTutorialManager::SetRestrictPlayerAttack(bool Restrict) {
}

void UHbkTutorialManager::SetRestrictPlayer(bool Restrict) {
}

void UHbkTutorialManager::RestartTutorialScore() {
}

void UHbkTutorialManager::ResetRestrictPlayer() {
}

bool UHbkTutorialManager::RegisterTutorialScore(UHbkTutorialScoreAsset* TutorialAsset) {
    return false;
}

void UHbkTutorialManager::Receive_OnTutorialResult(EHbkTutorialResultType ResultType) {
}

void UHbkTutorialManager::Receive_OnTutorialDisplayEnd() {
}

void UHbkTutorialManager::Receive_OnLastAttackHit(const UDamageType* DamageType) {
}

void UHbkTutorialManager::Receive_OnCalledMiss(bool IsInputMiss) {
}

void UHbkTutorialManager::OnStartScoreForUserCue(const FString& UserCue) {
}

void UHbkTutorialManager::OnStartScore(int32 NoteCount, bool bDownBeat) {
}

void UHbkTutorialManager::OnRestartScore(int32 NoteCount, bool bDownBeat) {
}

void UHbkTutorialManager::OnBeatHitStart(float BeatHitTiming) {
}

void UHbkTutorialManager::OnBeatHitInput(bool bSuccess) {
}

void UHbkTutorialManager::OnBeatEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkTutorialManager::OnAttackInput(int32 ComboCount, EHbkPlayerAttackType Variation, bool bJustTiming, bool bActiveTransit, float ComboActiveTime) {
}

bool UHbkTutorialManager::IsTutorialSuccess() const {
    return false;
}

bool UHbkTutorialManager::IsEndedTutorial() const {
    return false;
}

void UHbkTutorialManager::GetTimingRange(float& JustTiming, float& GoodTiming, float& FailedTiming) {
}

TArray<FHbkTutorialScoreRow> UHbkTutorialManager::GetCurrentTutorialScore() const {
    return TArray<FHbkTutorialScoreRow>();
}

UUserWidget* UHbkTutorialManager::CreateTutorialUI() {
    return NULL;
}


