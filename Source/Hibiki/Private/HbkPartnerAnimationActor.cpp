#include "HbkPartnerAnimationActor.h"
#include "Components/SceneComponent.h"
#include "HbkCostumeComponent.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPartnerAnimationActor::AHbkPartnerAnimationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->SkeltalMesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeltalMesh"));
    this->CostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMeshComponent"));
    this->CostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("CostumeComponent"));
    this->AnimationSlotName = TEXT("Action");
    this->SyncCostumeType = EHbkCostumeSyncType::None;
    this->SkeltalMesh->SetupAttachment(RootComponent);
    this->CostumeMeshComp->SetupAttachment(SkeltalMesh);
}

void AHbkPartnerAnimationActor::PerformAnimation(UAnimSequenceBase* Animation, float PlayRate) {
}


