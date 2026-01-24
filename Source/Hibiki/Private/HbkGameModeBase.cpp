#include "HbkGameModeBase.h"

AHbkGameModeBase::AHbkGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelName_HideOut = TEXT("HideOut_Main");
    this->LevelName_TrainingRoom = TEXT("Training_Main");
    this->LevelName_SpectraRoom = TEXT("SpectraRoom_All");
    this->LevelName_RhythmTower = TEXT("RT_All");
    this->LevelName_GameStudio = TEXT("VandelayGameWorks_Main");
    this->LevelName_RhythmTower2 = TEXT("RD_All");
    this->LevelName_BPMRush = TEXT("BPMRush_All");
    this->bIsCsRecording = false;
}

void AHbkGameModeBase::StopPlayingCSEV(UObject* WorldContextObject, const FGameplayTagContainer CsevTags, EHbkLevelSeqStopReason StopReason) {
}

void AHbkGameModeBase::SetToDefaultOnlinePresence(UObject* WorldContextObject) {
}

void AHbkGameModeBase::SetOnlinePresence(UObject* WorldContextObject, const FString& Key) {
}

void AHbkGameModeBase::RestartSoundState(const FName& InPlayerStartTag) {
}

void AHbkGameModeBase::MapCapture_MoveEditorCamera(UObject* WorldContextObject, float TargetScale) {
}

void AHbkGameModeBase::LoadGame(UObject* WorldContextObject) {
}

bool AHbkGameModeBase::IsTrainingRoomLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsTitleMenuLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsSpectraRoom(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsSpectraHUBLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsSpectraBattle(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsRhythmTowerLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsRhythmTower2Level(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsPlayingLevelSequence(UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsHideOutLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsGameStudioLevel(const UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsCutSceneRecordingMode(UObject* WorldContextObject) {
    return false;
}

bool AHbkGameModeBase::IsBPMRushLevel(const UObject* WorldContextObject) {
    return false;
}

FName AHbkGameModeBase::GetSpectraRoomName(const UObject* WorldContextObject) {
    return NAME_None;
}

FName AHbkGameModeBase::GetRestartCheckPoint(UObject* WorldContextObject, bool& bUsedDebugJump) {
    return NAME_None;
}

AHbkGameModeBase* AHbkGameModeBase::GetHbkGameMode(UObject* WorldContextObject) {
    return NULL;
}








