#include "HbkEm6000_MovingEmbankment.h"
#include "Components/SceneComponent.h"
#include "HbkCoinBlockerComponent.h"
#include "HbkImproveAttackComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm6000_MovingEmbankment::AHbkEm6000_MovingEmbankment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->EmbankmentSkeletalMeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("EmbankmentSkeletalMesh"));
    this->ImproveAttackComponent = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("ImproveAttack"));
    this->RhythmSynchroComponent = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->CoinBlockerComponent = CreateDefaultSubobject<UHbkCoinBlockerComponent>(TEXT("CoinBlocker"));
    this->MoveAnim = NULL;
    this->EmbankmentSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->ImproveAttackComponent->SetupAttachment(RootComponent);
}


