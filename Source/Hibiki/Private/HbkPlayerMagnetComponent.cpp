#include "HbkPlayerMagnetComponent.h"

UHbkPlayerMagnetComponent::UHbkPlayerMagnetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
    this->JamComboReceptionNoteCount = 3.00f;
    this->MagnetTraceChannel = TraceTypeQuery1;
    this->CameraToMagnetTraceChannel = TraceTypeQuery1;
    this->MagnetCollisionChannel = ECC_WorldStatic;
    this->StartAnim = NULL;
    this->AirStartAnim = NULL;
    this->MoveAnim = NULL;
    this->MoveEndAirAnim = NULL;
    this->MoveEndGroundAnim = NULL;
    this->MoveEndEdgeAnim = NULL;
    this->MoveEndEdgeAnimOneNote = NULL;
    this->MoveEndEdgeAnimTwoNotes = NULL;
    this->MoveJustEndAnim = NULL;
    this->MagnetRailSwingLAnim = NULL;
    this->MagnetRailSwingRAnim = NULL;
    this->MagnetRailQTESuccessAnim = NULL;
}

void UHbkPlayerMagnetComponent::Receive_OnStartJumpAnim() {
}

void UHbkPlayerMagnetComponent::Receive_OnPressKeyMagnetAnim(float Time) {
}

void UHbkPlayerMagnetComponent::Receive_OnNextMagnetAnim() {
}

void UHbkPlayerMagnetComponent::Receive_OnMagnetFailedAnim() {
}

void UHbkPlayerMagnetComponent::Receive_OnEndMagnetJump() {
}

void UHbkPlayerMagnetComponent::Receive_OnChangeSuccessSplineAnim() {
}

void UHbkPlayerMagnetComponent::Receive_OnAnimEndMoveSpline(EHbkGimmick_SplineMagnetRailEndAnimType EndAnimType) {
}

bool UHbkPlayerMagnetComponent::IsAttachMagnet() const {
    return false;
}

void UHbkPlayerMagnetComponent::ForceDetachToMagnetPoint() {
}

bool UHbkPlayerMagnetComponent::ForceAttachToMagnetPoint(UHbkMagneticPointComponent* MagnetPoint) {
    return false;
}


