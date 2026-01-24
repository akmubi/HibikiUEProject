#include "HbkHintSystemVolme.h"
#include "HbkGameAgentComponent.h"

AHbkHintSystemVolme::AHbkHintSystemVolme(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgent"));
    this->bAutoActivate = true;
    this->Priority = 0;
    this->DispHintButtonTime = 30.00f;
    this->bInhibitPlayerControl = false;
    this->bHintsDuringBattle = false;
    this->StateType = EHintSystemVolmeStateType::Default;
    this->bCurrent = false;
    this->bInPlayer = 0.00f;
    this->ShowHintButtonAsyncAction = NULL;
    this->TalkSession = NULL;
}

void AHbkHintSystemVolme::WaitEnd() {
}

void AHbkHintSystemVolme::OnTalkEnd(const FHbkTalkContext TalkContext) {
}

void AHbkHintSystemVolme::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkHintSystemVolme::OnPrepareBattle() {
}

void AHbkHintSystemVolme::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkHintSystemVolme::OnEndHintButton() {
}

void AHbkHintSystemVolme::OnEndBattle() {
}

void AHbkHintSystemVolme::EnableHintSystemVolume(UObject* WorldContextObject) {
}

void AHbkHintSystemVolme::DisableHintSystemVolume(UObject* WorldContextObject) {
}

void AHbkHintSystemVolme::CloseTalkCurrentHintSystemVolume(UObject* WorldContextObject) {
}

void AHbkHintSystemVolme::AllowEnd() {
}


