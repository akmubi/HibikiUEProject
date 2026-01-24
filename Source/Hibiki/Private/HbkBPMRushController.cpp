#include "HbkBPMRushController.h"
#include "HbkGameAgentComponent.h"

AHbkBPMRushController::AHbkBPMRushController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->ScreenTransitionTask = NULL;
    this->BPMRushTopMenuTask = NULL;
    this->BPMRushWaveStartTask = NULL;
    this->BPMRushBattleTask = NULL;
    this->StopMusicEvent = NULL;
    this->GaugeWidget = NULL;
    this->BPMRushDebug = NULL;
}

void AHbkBPMRushController::WaveStartScreenTransitionFadeIn() {
}

void AHbkBPMRushController::WaveStarted() {
}

void AHbkBPMRushController::WaveChangeScreenTransitionFadeOut() {
}

void AHbkBPMRushController::WaveChangeScreenTransitionFadeIn() {
}

void AHbkBPMRushController::WaitWaveStartChangeMusic() {
}

void AHbkBPMRushController::WaitWaveChangeState() {
}

void AHbkBPMRushController::ToGameOverInBPMRush(UObject* WorldContextObject) {
}

void AHbkBPMRushController::SuspendBPMRushVfx(UObject* WorldContextObject, FGameplayTagContainer RoleTags, FName callSign) {
}

void AHbkBPMRushController::SuccessBattle() {
}

void AHbkBPMRushController::StartTopMenu() {
}

void AHbkBPMRushController::StartGameOverWidget() {
}

void AHbkBPMRushController::StartGameOverSequencer() {
}

void AHbkBPMRushController::StartGameOver() {
}

void AHbkBPMRushController::StartBPMRushWave(UObject* WorldContextObject) {
}

void AHbkBPMRushController::StartBPMRushTopMenu(UObject* WorldContextObject) {
}

void AHbkBPMRushController::StartBPMRushBattle(UObject* WorldContextObject) {
}

bool AHbkBPMRushController::ShouldBPMRushGimmickActivateExtInt(UObject* WorldContextObject) {
    return false;
}

bool AHbkBPMRushController::ShouldBPMRushGameEnvPhaseSet(UObject* WorldContextObject) {
    return false;
}

void AHbkBPMRushController::SawBPMRushBattleTutorial(UObject* WorldContextObject) {
}

void AHbkBPMRushController::ResumeBPMRushVfx(UObject* WorldContextObject, FGameplayTagContainer RoleTags, FName callSign) {
}

void AHbkBPMRushController::PostStartPlay() {
}

void AHbkBPMRushController::PlayAudienceCheersSe(float RhythmGaugeChangeValue) {
}

void AHbkBPMRushController::NextBPMRushWave(UObject* WorldContextObject) {
}

void AHbkBPMRushController::NewGame() {
}

bool AHbkBPMRushController::IsSawBPMRushBattleTutorial(UObject* WorldContextObject) {
    return false;
}

bool AHbkBPMRushController::IsBPMRushPhaseChangeImmediate(UObject* WorldContextObject) {
    return false;
}

void AHbkBPMRushController::GotoTopMenu() {
}

void AHbkBPMRushController::GotoHideOut() {
}

EHbkMusicTitleTimingType AHbkBPMRushController::GetBPMRushMusicTitleType(UObject* WorldContextObject) {
    return EHbkMusicTitleTimingType::Opening;
}

int32 AHbkBPMRushController::GetBPMRushGimmickActivateExtIntValue(UObject* WorldContextObject) {
    return 0;
}

int32 AHbkBPMRushController::GetBPMRushGameEnvPhaseExtIntValue(UObject* WorldContextObject) {
    return 0;
}

void AHbkBPMRushController::FailBattle() {
}

void AHbkBPMRushController::DebugJumpStartScreenTransitionFadeOut() {
}

bool AHbkBPMRushController::DebugJumpStartDuringPreparation(float DeltaTime) {
    return false;
}

void AHbkBPMRushController::CreateBPMRushBattle(UObject* WorldContextObject) {
}

void AHbkBPMRushController::ClearBPMRush(UObject* WorldContextObject) {
}

void AHbkBPMRushController::BeginRecordBattleScore() {
}

void AHbkBPMRushController::BattleScorePointChanged(EHbkScoreActionType ActionType, FGameplayTagContainer ActionTags, float ChangeValue) {
}

void AHbkBPMRushController::BattleResultConfirmed(const FHbkBattleResultParam& Result, EHbkBattleResultType ResultType) {
}

void AHbkBPMRushController::BattleBegun(bool bFirst) {
}

void AHbkBPMRushController::ActivateBPMRushWaveStartTrigger(UObject* WorldContextObject) {
}


