#include "HbkSequencerEventActor.h"
#include "HbkGameAgentComponent.h"

AHbkSequencerEventActor::AHbkSequencerEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequenceActorClass = NULL;
    this->PlayOptionData = NULL;
    this->LevelSequenceAsset = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkSequencerEventActor::SetSequencerEventKit(const FHbkSequencerEventKit& NewKit) {
}

void AHbkSequencerEventActor::ReleaseSequencerEvent(bool bCallOnEnd, bool bSkipped) {
}

bool AHbkSequencerEventActor::PreLaodLevelSequenceAsset() {
    return false;
}

void AHbkSequencerEventActor::OnPreLoadEndLevelSequence() {
}

void AHbkSequencerEventActor::OnLoadEndLevelSequence() {
}

AHbkLevelSequenceActor* AHbkSequencerEventActor::GetSequencerEventLVSQ() {
    return NULL;
}

UHbkPlayLvSeqOption* AHbkSequencerEventActor::GetPlayOptionData() {
    return NULL;
}

int32 AHbkSequencerEventActor::DeploySequencerEvent() {
    return 0;
}



