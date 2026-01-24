#include "HbkEm6000_PopupArmStrongStatue.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "HbkStaticMeshComponent.h"

AHbkEm6000_PopupArmStrongStatue::AHbkEm6000_PopupArmStrongStatue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ArmStrongStatueStaticMeshComponent = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("ArmStrongStatueStaticMesh"));
    this->ArmStrongStatueCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ArmStrongStatueCapsuleCollision"));
    this->ImproveAttackComponent = NULL;
    this->RhythmSynchroSignalComponent = NULL;
    this->VFXSpawnLocationSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("VFXSpawnLocationSceneComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->NoteToEnter = EHbkNote::None;
    this->NoteCountToEnter = 0;
    this->OffsetToEnter = 0.00f;
    this->EasingFuncToEnter = EEasingFunc::Linear;
    this->EaseBlendExpToEnter = 0.00f;
    this->EaseStepToEnter = 0;
    this->NoteToLeave = EHbkNote::None;
    this->NoteCountToLeave = 0;
    this->OffsetToLeave = 0.00f;
    this->EasingFuncToLeave = EEasingFunc::Linear;
    this->EaseBlendExpToLeave = 0.00f;
    this->EaseStepToLeave = 0;
    this->VFXSpawnLocationSceneComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->ArmStrongStatueStaticMeshComponent->SetupAttachment(RootComponent);
    this->ArmStrongStatueCapsuleComponent->SetupAttachment(ArmStrongStatueStaticMeshComponent);
}


