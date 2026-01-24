#include "HbkTitleMenuNpcActor.h"
#include "Components/SceneComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkTitleMenuNpcActor::AHbkTitleMenuNpcActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->GameAgentComponent = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->DataAsset = NULL;
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AHbkTitleMenuNpcActor::SetUseHeadHoming(bool bNewFlag) {
}

void AHbkTitleMenuNpcActor::SetNpcState(EHbkTitleMenuNpcState State) {
}

void AHbkTitleMenuNpcActor::SetActiveRandomMotion(bool bActive) {
}

void AHbkTitleMenuNpcActor::ResetRandomMotion() {
}

void AHbkTitleMenuNpcActor::ResetNoInputTime() {
}

void AHbkTitleMenuNpcActor::PlaySlotAnimation(FName SectionName, float NewPlayRate) {
}

bool AHbkTitleMenuNpcActor::IsUseHeadHoming() const {
    return false;
}

EHbkTitleMenuNpcState AHbkTitleMenuNpcActor::GetNpcState() const {
    return EHbkTitleMenuNpcState::Default;
}

void AHbkTitleMenuNpcActor::GetLookAtRate(float& rRate) const {
}

void AHbkTitleMenuNpcActor::GetLookAtLocation(FVector& rLocation) const {
}


