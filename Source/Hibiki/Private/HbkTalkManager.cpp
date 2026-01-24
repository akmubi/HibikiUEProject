#include "HbkTalkManager.h"

UHbkTalkManager::UHbkTalkManager() {
    this->TalkSessionClass = NULL;
    this->ActionVoiceSessionClass = NULL;
}

void UHbkTalkManager::SweepTalkSession(UObject* WorldContextObject, bool bFreeSession, bool bLocalSession) {
}

AHbkTalkSession* UHbkTalkManager::StartTalkSession3DTest(UObject* WorldContextObject, const FHbkTalkSessionConf& Conf, UHbkTalkWidget* NewTalkWidget) {
    return NULL;
}

AHbkTalkSession* UHbkTalkManager::StartTalkSession(UObject* WorldContextObject, const FHbkTalkSessionConf& Conf) {
    return NULL;
}

bool UHbkTalkManager::ShowContextSubtitle(UObject* WorldContextObject, const UDataTable* TalkData, const FName TalkRow) {
    return false;
}

bool UHbkTalkManager::SetTalkRow(UObject* WorldContextObject, FName NewTalkRow) {
    return false;
}

bool UHbkTalkManager::RequestTalkLineSkip(UObject* WorldContextObject) {
    return false;
}

bool UHbkTalkManager::PushActionVoiceLineByBook(UObject* WorldContextObject, UDataTable* TalkData, FName LineID) {
    return false;
}

bool UHbkTalkManager::PlayVoiceAtLocation(UObject* WorldContextObject, UAkAudioEvent* InVoice, const FVector& InLocation, const FRotator& InRotation, bool bForceStopOtherACVs) {
    return false;
}

bool UHbkTalkManager::PlayVoice(UObject* WorldContextObject, UAkAudioEvent* Voice, AActor* Talker, bool bForceStopOtherACVs) {
    return false;
}

void UHbkTalkManager::OnStartGameoverSequencer() {
}

bool UHbkTalkManager::IsHoldingTalkSessionForMainScenario(UObject* WorldContextObject) {
    return false;
}

bool UHbkTalkManager::IsHoldingTalkSession(UObject* WorldContextObject) {
    return false;
}

void UHbkTalkManager::CloseTalkSessionAll(UObject* WorldContextObject) {
}

void UHbkTalkManager::CloseTalkSession(UObject* WorldContextObject, AHbkTalkSession* TargetTalkSession) {
}


