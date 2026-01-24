#include "HbkMagneticPointComponent.h"

UHbkMagneticPointComponent::UHbkMagneticPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->MagneticPointType = EHbkMagneticPointType::None;
    this->MagnetDistance = 5000.00f;
    this->MagnetVisibleDistance = 0.00f;
    this->bIgnoreCheckEdge = false;
    this->bIsEnable = true;
    this->bStayAttach = false;
    this->bIgnoreCameraTrace = false;
    this->bIsReject = false;
    this->bIsCutsceneIcon = false;
    this->bAdjustReachToOnBeat = false;
    this->bIsAdjustPlayerRotation = false;
    this->bSkipReachedAnim = false;
    this->BundingSphereRadius = 100.00f;
    this->bIgnoreResetCamera = false;
    this->bIgnoreNextMagnetMotion = false;
    this->bIsVariableStartingPoint = false;
    this->bIsVariableEndPoint = false;
    this->bIsVariablePoint = false;
    this->bChangeCamera = false;
    this->ChangeCameraBlendTime = 0.00f;
    this->OffsetYOnScreen = 170.00f;
    this->MagnetWidget = NULL;
}

void UHbkMagneticPointComponent::SleepAllVariableMagnet() {
}

void UHbkMagneticPointComponent::SetupVariableMagnet(int32 PatternNum) {
}

void UHbkMagneticPointComponent::SetPointType(EHbkMagneticPointType PointType) {
}

void UHbkMagneticPointComponent::SetMagnetPointEnabled(bool Enable) {
}

void UHbkMagneticPointComponent::SetForceDisplayTargetPoint(bool ForceTarget) {
}

void UHbkMagneticPointComponent::OnUsableTriigerEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UHbkMagneticPointComponent::OnUsableTriigerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


