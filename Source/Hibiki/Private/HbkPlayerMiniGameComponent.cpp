#include "HbkPlayerMiniGameComponent.h"

UHbkPlayerMiniGameComponent::UHbkPlayerMiniGameComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuccessSound = NULL;
    this->FailureSound = NULL;
    this->TestRhythmScoreAsset = NULL;
    this->MiniGameRhythmScoreAsset = NULL;
}

void UHbkPlayerMiniGameComponent::OnTakeOffBeltAnimRD() {
}

void UHbkPlayerMiniGameComponent::OnTakeOffBeltAnim() {
}

void UHbkPlayerMiniGameComponent::OnStartRhythmScore() {
}

void UHbkPlayerMiniGameComponent::OnRhythmScoreInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput) {
}

void UHbkPlayerMiniGameComponent::OnRhythmScoreCancelHoldRelease(int32 Index) {
}

void UHbkPlayerMiniGameComponent::OnPrepared() {
}

void UHbkPlayerMiniGameComponent::OnMiniGameResultAnimRD(bool bSuccess) {
}

void UHbkPlayerMiniGameComponent::OnMiniGameResultAnim(bool bSuccess) {
}

void UHbkPlayerMiniGameComponent::OnEndRhythmScore() {
}

void UHbkPlayerMiniGameComponent::OnBeginMiniGameAnimRD() {
}

void UHbkPlayerMiniGameComponent::OnBeginMiniGameAnim() {
}

void UHbkPlayerMiniGameComponent::OnBeatHitLoopAnimRD() {
}

void UHbkPlayerMiniGameComponent::OnBeatHitLoopAnim() {
}

bool UHbkPlayerMiniGameComponent::IsPlayMotion() const {
    return false;
}

bool UHbkPlayerMiniGameComponent::IsInterruptWhenFailed() const {
    return false;
}

bool UHbkPlayerMiniGameComponent::IsInRhythmMiniGame() const {
    return false;
}

bool UHbkPlayerMiniGameComponent::IsInMiniGame() const {
    return false;
}

void UHbkPlayerMiniGameComponent::EndMiniGame(bool bMiniGameResult) {
}

bool UHbkPlayerMiniGameComponent::Blueprint_PrepareRhythmMiniGame(FMiniGameEventDelegate OnReadyToBeginEvent, bool bLocationInterp, FTransform InterpLocation, UHbkRhythmScoreAsset* Asset, UHbkBeginRhythmGameAsset* BeginParamAsset) {
    return false;
}

bool UHbkPlayerMiniGameComponent::BeginMinigame() {
    return false;
}

void UHbkPlayerMiniGameComponent::AbortMiniGame() {
}


