#include "HbkGameRuleManager.h"

UHbkGameRuleManager::UHbkGameRuleManager() {
    this->FullScreenMovieWidgetClass = NULL;
    this->FullScreenMovieLoadImageWidgetClass = NULL;
    this->GameOverLevelSequenceActorClass = NULL;
    this->GameOverToTitleSeqName = TEXT("BackToTitle");
    this->GameOverToHideOutSeqName = TEXT("HideOut");
    this->TrainingRoomRoomToHideOutSeqName = TEXT("HideOutFromTrainingRoom");
    this->SpectraRoomToHideOutSeqName = TEXT("HideOutFromSpectraRoom");
    this->RhythmTowerToHideOutSeqName = TEXT("HideOutFromRhythmTower");
    this->RhythmTower2ToHideOutSeqName = TEXT("HideOutFromRhythmTower2");
    this->BPMRushToHideOutSeqName = TEXT("HideOutFromBPMRush");
    this->DefaultAutoResetPlayerPosZ = -150000.00f;
    this->BeginPauseEvent = NULL;
    this->EndPauseEvent = NULL;
    this->MovieInfoTable = NULL;
    this->FullScreenMoviePlayer = NULL;
    this->GameEnvStateObject = NULL;
    this->DisplayMoviePlayer = NULL;
    this->SkillDescMoviePlayer = NULL;
    this->TutorialMoviePlayer = NULL;
    this->DifficultyAsset = NULL;
    this->StageResultNextSelectWidgetClass = NULL;
    this->NoticePopupControlClass = NULL;
    this->NoticePopupControl = NULL;
    this->HowToPlayController = NULL;
    this->PhotoModeController = NULL;
    this->PhotoCollisionHalfRadius = 11.00f;
    this->PhotoTraceChannel = ECC_Camera;
    this->RhythmDungeonController = NULL;
}

bool UHbkGameRuleManager::TutorialMoviePlayBink(const FName& MovieInfoKey, UBinkMediaPlayer* BinkPlayer, UBinkMediaTexture* BinkTexture, bool Sound) {
    return false;
}

void UHbkGameRuleManager::TutorialMoviePlay(UMediaPlayer* MediaPlayer, UMediaSource* MediaSource, bool Sound) {
}

void UHbkGameRuleManager::StopFullScreenMovie(EHbkFullScreenMovieManualStopType ManualStopType) {
}

void UHbkGameRuleManager::StartGameOverEvent(UObject* WorldContextObject, EHbkGameOverEventType EventType) {
}

void UHbkGameRuleManager::SkillDescMoviePlay(UMediaPlayer* MediaPlayer, UMediaSource* MediaSource, bool Sound) {
}

void UHbkGameRuleManager::ShowGameOverWidget() {
}

void UHbkGameRuleManager::SetSpectraBattleState(UObject* WorldContextObject, bool bState) {
}

bool UHbkGameRuleManager::SetRestartTransform(UObject* WorldContextObject, FTransform Transform) {
    return false;
}

bool UHbkGameRuleManager::SetRestartPoint(UObject* WorldContextObject, AActor* PointActor, AHbkSetPlayerRestartPosTrigger* PointOwnerTrigger) {
    return false;
}

void UHbkGameRuleManager::SetInTutorialStage(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::SetGameOverTalkOverride(UObject* WorldContextObject, UDataTable* GameOverTalkData, FName GameOverStartTalkLine) {
}

void UHbkGameRuleManager::SetGameOverSequencerTransform(const FTransform& Transform) {
}

void UHbkGameRuleManager::SetGameOverEventType(EHbkGameOverEventType NewEventType) {
}

void UHbkGameRuleManager::SetFullScreenImage(UTexture2D* Texture, float BlendTime, float Opacity) {
}

void UHbkGameRuleManager::SetChangeableNowDifficultyType(UObject* WorldContextObject, bool bChangeable) {
}

void UHbkGameRuleManager::SetAutoResetPlayerPositionZ(UObject* WorldContextObject, float NewPosZ) {
}

void UHbkGameRuleManager::RestartRhythmTower2(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::RestartRhythmTower(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::RestartBPMRush(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::ResetGameOverEventType() {
}

void UHbkGameRuleManager::PlayGameOverSequencer() {
}

bool UHbkGameRuleManager::PlayFullScreenMovieBink(const FName& MovieInfoKey, bool AutoClose, EHbkFullScreenMovieManualStopType ManualStopType) {
    return false;
}

bool UHbkGameRuleManager::PlayFullScreenMovie(UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture, bool AutoClose, EHbkFullScreenMovieManualStopType ManualStopType) {
    return false;
}

void UHbkGameRuleManager::OnShowGameOverWidget() {
}

void UHbkGameRuleManager::OnSelectReturnToTitle() {
}

void UHbkGameRuleManager::OnSelectRestart() {
}

void UHbkGameRuleManager::OnFSMovieOpenFailed(const FString& FailedUrl) {
}

void UHbkGameRuleManager::OnFSMovieOpened(const FString& OpenedUrl) {
}

void UHbkGameRuleManager::OnFSMovieEndReached() {
}

void UHbkGameRuleManager::OnDisplayMovieOpened(const FString& OpenedUrl) {
}

void UHbkGameRuleManager::OnDisplayMovieEndReached() {
}

void UHbkGameRuleManager::OnDisplayMovieClosed() {
}

bool UHbkGameRuleManager::IsUnlockMasterDifficulty(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameRuleManager::IsPlayingFullScreenMovie() const {
    return false;
}

bool UHbkGameRuleManager::IsDebugRestartMode(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameRuleManager::IsChangeableNowDifficultyType(UObject* WorldContextObject) {
    return false;
}

void UHbkGameRuleManager::HbkSetGamePaused(UObject* WorldContextObject, bool bPaused) {
}

void UHbkGameRuleManager::GotoTitle(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::GotoHideOutDebug(UObject* WorldContextObject, bool AllStageCleared, int32 StageNo, bool AfterClear, bool FirstStep) {
}

void UHbkGameRuleManager::GotoHideOut(UObject* WorldContextObject) {
}

bool UHbkGameRuleManager::GetSpectraBattleState(UObject* WorldContextObject) {
    return false;
}

EHbkDifficultyType UHbkGameRuleManager::GetNowDifficultyType(UObject* WorldContextObject) {
    return EHbkDifficultyType::Easy;
}

bool UHbkGameRuleManager::GetLevelDifficultyParams(UObject* WorldContextObject, FHbkLevelDifficultyParamsRow& Out) {
    return false;
}

UHbkFullScreenMovieWidget* UHbkGameRuleManager::GetFullScreenWidget() const {
    return NULL;
}

UTexture* UHbkGameRuleManager::GetFullScreenMediaTexture() const {
    return NULL;
}

bool UHbkGameRuleManager::GetDifficultyParams(UObject* WorldContextObject, FHbkDifficultyParamsRow& Out) {
    return false;
}

EHbkDifficultyType UHbkGameRuleManager::GetConfigNowDifficultyType(UObject* WorldContextObject) {
    return EHbkDifficultyType::Easy;
}

void UHbkGameRuleManager::ForceGameOver(UObject* WorldContextObject, bool bPlayerDied) {
}

void UHbkGameRuleManager::FinishPhotoModeController() {
}

void UHbkGameRuleManager::EndGameOverEvent(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::EndDisplayMovie(UObject* WorldContextObject) {
}

void UHbkGameRuleManager::EmptyTutorialMovie() {
}

void UHbkGameRuleManager::ClearFullScreenImage(float BlendTime) {
}

void UHbkGameRuleManager::ChangeNowDifficultyType(UObject* WorldContextObject, EHbkDifficultyType Type) {
}

bool UHbkGameRuleManager::Blueprint_ResetPlayerPosition(UObject* WorldContextObject, EHbkRestartEventType RestartType) {
    return false;
}

UHbkRhythmDungeonController* UHbkGameRuleManager::Blueprint_GetRhythmDungeonController(UObject* WorldContextObject) {
    return NULL;
}

void UHbkGameRuleManager::BeginDisplayMovieBink(UObject* WorldContextObject, FName MovieInfoKey, bool bLoop) {
}

void UHbkGameRuleManager::BeginDisplayMovie(UObject* WorldContextObject, UMediaTexture* NewMediaTexture, UMediaSource* NewMediaSource, UMediaPlayer* NewMediaPlayer) {
}


