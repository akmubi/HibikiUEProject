#include "HbkTalkEventSequence.h"
#include "HbkGameAgentComponent.h"

AHbkTalkEventSequence::AHbkTalkEventSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkEventTemplate = NULL;
    this->CurTalkEventTemplate = NULL;
    this->GameAgentComponent = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkTalkEventSequence::RecieveTalkSessionEnd(const FHbkTalkContext TalkContext) {
}

void AHbkTalkEventSequence::RecieveTalkCue(const FName TalkCue) {
}

bool AHbkTalkEventSequence::PlayTalkEventByOption(APlayerController* Controller, const FName OptionName) {
    return false;
}

bool AHbkTalkEventSequence::PlayTalkEvent(APlayerController* Controller) {
    return false;
}

UHbkTalkEventTemplate* AHbkTalkEventSequence::GetTalkEventTemplate() {
    return NULL;
}


