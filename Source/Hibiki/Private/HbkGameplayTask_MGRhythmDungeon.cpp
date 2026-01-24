#include "HbkGameplayTask_MGRhythmDungeon.h"

UHbkGameplayTask_MGRhythmDungeon::UHbkGameplayTask_MGRhythmDungeon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pRDLevel = NULL;
    this->pRDBattle = NULL;
    this->pRDSound = NULL;
    this->pRDChallenge = NULL;
    this->pRDInformationSign = NULL;
    this->pRDDialog = NULL;
    this->pRDResult = NULL;
    this->pRDDebug = NULL;
    this->pStartWidget = NULL;
    this->pPopupWidget = NULL;
    this->pTimerWidget = NULL;
    this->pStoreWidget = NULL;
}

void UHbkGameplayTask_MGRhythmDungeon::StartGame() {
}

void UHbkGameplayTask_MGRhythmDungeon::SetEndTutorial(EHbkMGRhythmDungeon_TutorialType Type) {
}

UHbkGameplayTask_MGRhythmDungeon* UHbkGameplayTask_MGRhythmDungeon::RhythmDungeonTask(UObject* WorldContextObject, UHbkMGRhythmDungeon_DataAsset* DataAsset) {
    return NULL;
}

void UHbkGameplayTask_MGRhythmDungeon::OpenShop(AActor* Actor) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnYesDialog() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnYesDebugChallengeJump() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnStartGameOverWidget() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnStartGameOverSequence() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnStartGameOver() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnRhythmDungeonRetry() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnReturnToHideout() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnPostLoad() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnNoDialog() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnNewGame(bool bHardcoreMode) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnFinishedFade() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnEndWaveSign() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnEndShop(UHbkRhythmDungeonStoreWidget* pWidget) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnEndScoreSign() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnEndDebugShop(UHbkRhythmDungeonStoreWidget* pWidget) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnContinue(bool bHardcoreMode) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnChallengeSuccess() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnChallengeFailedDialog() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnChallengeFailed() {
}

void UHbkGameplayTask_MGRhythmDungeon::OnCancelShop(UHbkRhythmDungeonStoreWidget* pWidget) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnCancelDebugShop(UHbkRhythmDungeonStoreWidget* pWidget) {
}

void UHbkGameplayTask_MGRhythmDungeon::OnBeforeUnLoad() {
}

void UHbkGameplayTask_MGRhythmDungeon::NextWave() {
}

bool UHbkGameplayTask_MGRhythmDungeon::IsEndTutorial(EHbkMGRhythmDungeon_TutorialType Type) {
    return false;
}

int32 UHbkGameplayTask_MGRhythmDungeon::GetRhythmDungeonWaveNum() {
    return 0;
}

FName UHbkGameplayTask_MGRhythmDungeon::GetChallengeTypeName() {
    return NAME_None;
}

void UHbkGameplayTask_MGRhythmDungeon::EndBattle() {
}

void UHbkGameplayTask_MGRhythmDungeon::End() {
}

void UHbkGameplayTask_MGRhythmDungeon::BeginBattle() {
}


