#include "HbkEnemyResetEventActor.h"
#include "HbkGameAgentComponent.h"

AHbkEnemyResetEventActor::AHbkEnemyResetEventActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyResetLevelSequenceActorClass = NULL;
    this->PlayOptionData = NULL;
    this->EnemyResetDT = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkEnemyResetEventActor::SetEnemyResetKit(const FHbkEnemyResetKit& NewKit) {
}

void AHbkEnemyResetEventActor::ResetCurrentPlayList() {
}

void AHbkEnemyResetEventActor::ReleaseEnemyResetEvent(bool bCallOnEnd) {
}

void AHbkEnemyResetEventActor::NextSetEnemyResetKit() {
}

UHbkPlayLvSeqOption* AHbkEnemyResetEventActor::GetPlayOptionData() {
    return NULL;
}

AHbkLevelSequenceActor* AHbkEnemyResetEventActor::GetEnemyResetLVSQ() {
    return NULL;
}

bool AHbkEnemyResetEventActor::DeployEnemyResetEvent() {
    return false;
}



