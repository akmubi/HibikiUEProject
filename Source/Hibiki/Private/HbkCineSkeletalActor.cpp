#include "HbkCineSkeletalActor.h"
#include "Components/SceneComponent.h"
#include "HbkCineActorGraphicsComponent.h"
#include "HbkCineToonShadingComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AHbkCineSkeletalActor::AHbkCineSkeletalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->ReplicatedMesh = NULL;
    this->ReplicatedPhysAsset = NULL;
    this->ReplicatedMaterial0 = NULL;
    this->ReplicatedMaterial1 = NULL;
    this->bIsRenamed = false;
    this->bShouldDoAnimNotifies = true;
    this->SceneRootComp = (USceneComponent*)RootComponent;
    this->SkeletalMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->CineGraphicsComponent = CreateDefaultSubobject<UHbkCineActorGraphicsComponent>(TEXT("CineGraphicsComponent"));
    this->CineToonShadingComponent = CreateDefaultSubobject<UHbkCineToonShadingComponent>(TEXT("CineToonShadingComponent"));
    this->SkeletalMeshComp->SetupAttachment(RootComponent);
}

void AHbkCineSkeletalActor::OnRep_ReplicatedPhysAsset() {
}

void AHbkCineSkeletalActor::OnRep_ReplicatedMesh() {
}

void AHbkCineSkeletalActor::OnRep_ReplicatedMaterial1() {
}

void AHbkCineSkeletalActor::OnRep_ReplicatedMaterial0() {
}

bool AHbkCineSkeletalActor::K2_SetActorLocationFromFeet(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}

UAnimInstance* AHbkCineSkeletalActor::GetAnimInstance() const {
    return NULL;
}

FVector AHbkCineSkeletalActor::GetActorLocationAtFeet() const {
    return FVector{};
}


void AHbkCineSkeletalActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHbkCineSkeletalActor, ReplicatedMesh);
    DOREPLIFETIME(AHbkCineSkeletalActor, ReplicatedPhysAsset);
    DOREPLIFETIME(AHbkCineSkeletalActor, ReplicatedMaterial0);
    DOREPLIFETIME(AHbkCineSkeletalActor, ReplicatedMaterial1);
}

void AHbkCineSkeletalActor::BeginAnimControl(class UInterpGroup* InInterpGroup) {
}

void AHbkCineSkeletalActor::SetAnimPosition(FName SlotName, int32 ChannelIndex, class UAnimSequence* InAnimSequence, float InPosition, bool bFireNotifies, bool bLooping) {
}

void AHbkCineSkeletalActor::FinishAnimControl(class UInterpGroup* InInterpGroup) {
}
