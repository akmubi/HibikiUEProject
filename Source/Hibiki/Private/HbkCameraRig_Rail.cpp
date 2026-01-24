#include "HbkCameraRig_Rail.h"
#include "HbkGameAgentComponent.h"

AHbkCameraRig_Rail::AHbkCameraRig_Rail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraDir = EHbkRailCamDir::Right;
    this->FollowInterpSpeed = 10.00f;
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

void AHbkCameraRig_Rail::SetEnableRailCameraKeyByTag(UObject* WorldContextObject, const FGameplayTag RailCamTag, const FName callSign, const FName KeyGroupName, bool NewEnable) {
}

void AHbkCameraRig_Rail::SetEnableRailCameraKey(const FName KeyGroupName, bool NewEnable) {
}

bool AHbkCameraRig_Rail::EndRailCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}

bool AHbkCameraRig_Rail::BeginRailCamera(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
    return false;
}


