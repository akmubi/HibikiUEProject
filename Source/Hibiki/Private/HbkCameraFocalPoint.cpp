#include "HbkCameraFocalPoint.h"
#include "HbkGameAgentComponent.h"

AHbkCameraFocalPoint::AHbkCameraFocalPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldOfView = 90.00f;
    this->OrthoWidth = 512.00f;
    this->OrthoNearClipPlane = 0.00f;
    this->OrthoFarClipPlane = 2097152.00f;
    this->AspectRatio = 1.78f;
    this->bConstrainAspectRatio = true;
    this->bUseFieldOfViewForLOD = true;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->PostProcessBlendWeight = 1.00f;
    this->BlendInTime = 1.00f;
    this->BlendInNoteType = EHbkNote::None;
    this->BlendInNoteCounts = 0;
    this->BlendInFunc = VTBlend_Cubic;
    this->BlendInExp = 0.00f;
    this->bBlendInLockOutgoing = false;
    this->BlendOutViewTargetType = EHbkCameraViewTargetAfterDeactive::Restore;
    this->BlendOutTime = 1.00f;
    this->BlendOutNoteType = EHbkNote::None;
    this->BlendOutNoteCounts = 0;
    this->BlendOutFunc = VTBlend_Cubic;
    this->BlendOutExp = 0.00f;
    this->bBlendOutLockOutgoing = false;
    this->GameAgentComponent = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

bool AHbkCameraFocalPoint::EndCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}

bool AHbkCameraFocalPoint::BeginCamera(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}


