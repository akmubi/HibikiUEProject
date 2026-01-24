#include "HbkGameSequenceManager.h"

UHbkGameSequenceManager::UHbkGameSequenceManager() {
    this->GameSeqData = NULL;
    this->DefaultFadeDuration = 1.00f;
}

bool UHbkGameSequenceManager::StepForwardGameSequenceRetryStage(UObject* WorldContextObject, float FadeDuration) {
    return false;
}

bool UHbkGameSequenceManager::StepForwardGameSequence(UObject* WorldContextObject, const FName GameSeqName, float FadeDuration, const FString& FixOptions) {
    return false;
}

bool UHbkGameSequenceManager::IsThisGameCheckpointAvailable(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameSequenceManager::IsPIEBootLevel(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameSequenceManager::IsExecFade(UObject* WorldContextObject) {
    return false;
}

bool UHbkGameSequenceManager::IsDebugJump(UObject* WorldContextObject) {
    return false;
}

int32 UHbkGameSequenceManager::GetNextStageNo(UObject* WorldContextObject, int32 StageNo) {
    return 0;
}

FName UHbkGameSequenceManager::GetLastGameSequenceName(UObject* WorldContextObject) {
    return NAME_None;
}

float UHbkGameSequenceManager::GetDefaultFadeDuration(UObject* WorldContextObject) {
    return 0.0f;
}

bool UHbkGameSequenceManager::DebugJumpTo(UObject* WorldContextObject, const FName LevelName, const FName PlayerStartName, const FHbkDebugJumpOption& Option) {
    return false;
}


