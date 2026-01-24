#include "HbkRhythmParryAreaAnchor.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "HbkGameAgentComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkRhythmParryAreaAnchor::AHbkRhythmParryAreaAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("EnemyDammy"));
    this->PlayingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayingArea"));
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    this->EnemyDammy = (UHbkSkeletalMeshComponent*)RootComponent;
    this->PlayerDammy = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("PlayerDammy"));
    this->CamDammy = CreateDefaultSubobject<UCameraComponent>(TEXT("CamDammy"));
    this->PreviewType = EHbkRPAreaType::Em0500A;
    this->bOnStartEnable = false;
    this->PlayingArea->SetupAttachment(RootComponent);
    this->PlayerDammy->SetupAttachment(RootComponent);
    this->CamDammy->SetupAttachment(RootComponent);
}


