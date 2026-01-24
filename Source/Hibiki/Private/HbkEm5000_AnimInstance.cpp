#include "HbkEm5000_AnimInstance.h"

UHbkEm5000_AnimInstance::UHbkEm5000_AnimInstance() {
    this->Style = EHbkEm5000Style::Skirt;
    this->bIsMove = false;
    this->bIsMoveOngoing = false;
    this->MoveOnGoingTime = 0.00f;
    this->MoveOnGoingTimeMax = 0.00f;
    this->MoveHorizontal = 0.00f;
    this->MoveForward = 0.00f;
    this->MoveAirLength = 0.00f;
    this->bIsBridgeBreakdown = false;
    this->bIsAdjustNextNote = false;
    this->AdjustNextNoteTime = 0.00f;
    this->BeginPlayRate = 0.00f;
    this->bIsGrab = false;
    this->GrabTargetYaw = 0.00f;
    this->GrabYaw = 0.00f;
    this->GrabYawSpeed = 0.00f;
    this->bIsFeasibleSecondGrab = false;
    this->bIsGrab2nd = false;
}

void UHbkEm5000_AnimInstance::SetSecondGrab(bool Enable) {
}

void UHbkEm5000_AnimInstance::SetGrabYaw(float Yaw) {
}

void UHbkEm5000_AnimInstance::SetGrab(bool Enable) {
}

void UHbkEm5000_AnimInstance::SetFeasibleSecondGrab(bool Enable) {
}

void UHbkEm5000_AnimInstance::SetBridgeBreakdown(bool Enable) {
}

void UHbkEm5000_AnimInstance::SetAdjustBeat(EHbkNote NoteType, float MinTimeRate) {
}

void UHbkEm5000_AnimInstance::ResetAdjustBeat() {
}

bool UHbkEm5000_AnimInstance::IsGrab() const {
    return false;
}


