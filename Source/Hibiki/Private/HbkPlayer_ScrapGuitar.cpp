#include "HbkPlayer_ScrapGuitar.h"
#include "Components/SceneComponent.h"
#include "HbkBreakableSkeletonComponent.h"
#include "HbkControllableSkeletalMeshComponent.h"

AHbkPlayer_ScrapGuitar::AHbkPlayer_ScrapGuitar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->HbkBreakableSkeletonCompLv1 = CreateDefaultSubobject<UHbkBreakableSkeletonComponent>(TEXT("HbkBreakableSkeletonCompLv1"));
    this->HbkBreakableSkeletonCompLv2 = CreateDefaultSubobject<UHbkBreakableSkeletonComponent>(TEXT("HbkBreakableSkeletonCompLv2"));
    this->HbkControllableMeshLv1 = CreateDefaultSubobject<UHbkControllableSkeletalMeshComponent>(TEXT("HbkControllableMeshLv1"));
    this->HbkControllableMeshLv2 = CreateDefaultSubobject<UHbkControllableSkeletalMeshComponent>(TEXT("HbkControllableMeshLv2"));
    this->RadialImpulseStrength = 2000.00f;
    this->RadialImpulseRadius = 150.00f;
    this->HbkControllableMeshLv1->SetupAttachment(RootComponent);
    this->HbkControllableMeshLv2->SetupAttachment(RootComponent);
}

void AHbkPlayer_ScrapGuitar::Receive_OnPrepareCharge() {
}

void AHbkPlayer_ScrapGuitar::Receive_OnEndedCharge() {
}

void AHbkPlayer_ScrapGuitar::Receive_OnCancelPrepare() {
}

void AHbkPlayer_ScrapGuitar::Receive_OnBeginCharge() {
}

void AHbkPlayer_ScrapGuitar::Receive_NotifyGatherUp(int32 ChargeLevel, float GatherUpDuration) {
}

void AHbkPlayer_ScrapGuitar::OnEndedGatherUp() {
}


