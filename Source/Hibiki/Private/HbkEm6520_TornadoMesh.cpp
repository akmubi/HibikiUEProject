#include "HbkEm6520_TornadoMesh.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm6520_TornadoMesh::AHbkEm6520_TornadoMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeltalMeshComponent"));
    this->RhythmSynchroComponent = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->NoteToEnter = EHbkNote::None;
    this->NoteCountToEnter = 0;
    this->BossBeginAnim = NULL;
    this->BossBeginAnimHideTime = 0.00f;
    this->BossWinAnim = NULL;
    this->PartnerBeginAnim = NULL;
    this->PartnerBeginAnimHideTime = 0.00f;
    this->PartnerWinAnim = NULL;
    this->EffectAttachLineLength = 0.00f;
    this->EffectMaxScale = 0.00f;
    this->MeshComponent->SetupAttachment(RootComponent);
}


