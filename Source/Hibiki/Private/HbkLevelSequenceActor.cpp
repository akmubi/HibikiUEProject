#include "HbkLevelSequenceActor.h"
#include "HbkGameAgentComponent.h"
#include "HbkLevelSequencePlayer.h"

AHbkLevelSequenceActor::AHbkLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
    this->bEnableSkipToEnd = false;
    this->PlayOptionData = NULL;
    this->FooterButtonWidget = NULL;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

TArray<AHbkEnemyCharacter*> AHbkLevelSequenceActor::SpawnEnemyFromGroup(const FName SpawnGroupName) {
    return TArray<AHbkEnemyCharacter*>();
}

void AHbkLevelSequenceActor::ResumeAI(const TArray<AHbkEnemyCharacter*>& EnemyList) {
}

int32 AHbkLevelSequenceActor::PostEventUnrealGlobalForLevelSequence(UAkAudioEvent* AkEvent) {
    return 0;
}

void AHbkLevelSequenceActor::OnBeginCameraCut(UCameraComponent* InCameraComponent) {
}

bool AHbkLevelSequenceActor::IsInitialized() {
    return false;
}


