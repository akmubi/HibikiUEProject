#include "HbkCameraActor.h"
#include "HbkCameraComponent.h"
#include "HbkGameAgentComponent.h"

AHbkCameraActor::AHbkCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkCameraComponent>(TEXT("CameraComponent"))) {
    this->BlendInTime = 0.50f;
    this->BlendInNoteType = EHbkNote::None;
    this->BlendInNoteCounts = 0;
    this->BlendInFunc = VTBlend_Cubic;
    this->BlendInExp = 0.00f;
    this->bBlendInLockOutgoing = false;
    this->BlendOutViewTargetType = EHbkCameraViewTargetAfterDeactive::Restore;
    this->BlendOutTime = 0.50f;
    this->BlendOutNoteType = EHbkNote::None;
    this->BlendOutNoteCounts = 0;
    this->BlendOutFunc = VTBlend_Cubic;
    this->BlendOutExp = 0.00f;
    this->bBlendOutLockOutgoing = false;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

void AHbkCameraActor::SetCameraRigRail(AHbkCameraRig_Rail* NewCameraRigRail, APlayerController* FollowToPlayer) {
}


