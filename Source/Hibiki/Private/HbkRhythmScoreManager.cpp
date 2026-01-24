#include "HbkRhythmScoreManager.h"

UHbkRhythmScoreManager::UHbkRhythmScoreManager() {
    this->RhythmScoreInEvent = NULL;
    this->RhythmScoreOutEvent = NULL;
}

void UHbkRhythmScoreManager::Update(float DeltaTime) {
}

void UHbkRhythmScoreManager::SyncUserCueForStart(const FString& UserString) {
}

bool UHbkRhythmScoreManager::StopRhythmScore() {
    return false;
}

bool UHbkRhythmScoreManager::StartRhythmScore() {
    return false;
}

bool UHbkRhythmScoreManager::RegisterRhythmScore(UHbkRhythmScoreAsset* ScoreParam, const FHbkBeginRhythmScoreParam BeginParam) {
    return false;
}

void UHbkRhythmScoreManager::PrepareForStart(int32 NoteCount, bool bDownBeat) {
}

float UHbkRhythmScoreManager::GetScoreTime() const {
    return 0.0f;
}

UHbkRhythmScoreAsset* UHbkRhythmScoreManager::GetCurrentRhythmScore() const {
    return NULL;
}

void UHbkRhythmScoreManager::ChangeSoundState(int32 NoteCount, bool bDownBeat) {
}


