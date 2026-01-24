#include "HbkAnimInstance.h"

UHbkAnimInstance::UHbkAnimInstance() {
    this->bUseSyncRate = false;
    this->IdleAnimBaseLengthNote = EHbkNote::Note_Whole;
    this->IdleAnimPlayPos = 0.00f;
    this->MoveAnimBaseLengthNote = EHbkNote::Note_Half;
    this->MoveAnimPlayPos = 0.00f;
    this->RunAnimBaseLengthNote = EHbkNote::Note_Quarter;
    this->RunAnimPlayPos = 0.00f;
    this->SyncPlayRate = 1.00f;
    this->SequencerSlotAlpha = 0.00f;
    this->SequencerSlotIgnoreOriginAlpha = 0.00f;
    this->SequencerEndOriginAlpha = 0.00f;
    this->bEnableJointChainPhys = true;
    this->DebugDrawStateMachineName = TEXT("BaseState");
    this->bDebugDrawSocket = false;
}

void UHbkAnimInstance::StopAnimWithSlot(FName SlotNodeName, float BlendOut) {
}

void UHbkAnimInstance::StopAnimWithGroup(FName GroupName, float BlendOut) {
}

void UHbkAnimInstance::SetSlotAnimationPosition(FName SlotNodeName, float Position) {
}

void UHbkAnimInstance::SetSlotAnimationPlayRate(FName SlotNodeName, float PlayRate) {
}

void UHbkAnimInstance::SetGroupPlayRate(FName GroupName, float PlayRate) {
}

void UHbkAnimInstance::SetForcePlaySequencer(bool ForcePlay) {
}

void UHbkAnimInstance::RequestAnimTransit(FName RequestName) {
}

void UHbkAnimInstance::OnCalcSyncParameter(int32 MusicId) {
}

void UHbkAnimInstance::Notify_MontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool UHbkAnimInstance::IsValidAnimTransit(FName RequestName) {
    return false;
}

bool UHbkAnimInstance::IsStateActive(FName MachineName, FName StateName, float ThresholdWeight) {
    return false;
}

bool UHbkAnimInstance::IsPlayingAnySlotAnimation(FName SlotNodeName) const {
    return false;
}

bool UHbkAnimInstance::IsPlayingAnimationWithGroup(FName GroupName) const {
    return false;
}

bool UHbkAnimInstance::IsMachineActive(FName MachineName, float ThresholdWeight) {
    return false;
}

bool UHbkAnimInstance::IsAnyStateActive(FName MachineName, const TArray<FName>& StateNames, float ThresholdWeight) {
    return false;
}

float UHbkAnimInstance::GetStateWeight(FName MachineName, FName StateName) {
    return 0.0f;
}

float UHbkAnimInstance::GetSlotAnimationPosition(FName SlotNodeName) const {
    return 0.0f;
}

float UHbkAnimInstance::GetSlotAnimationPlayRate(FName SlotNodeName) const {
    return 0.0f;
}

float UHbkAnimInstance::GetMachineWeight(FName MachineName) {
    return 0.0f;
}

bool UHbkAnimInstance::GetJointChainEnabled() const {
    return false;
}

AHbkWeapon* UHbkAnimInstance::GetHbkWeapon() const {
    return NULL;
}

AHbkTalkableActor* UHbkAnimInstance::GetHbkTalkableActor() const {
    return NULL;
}

AHbkGimmick_BreakBase* UHbkAnimInstance::GetHbkGimmickBreak() const {
    return NULL;
}

AHbkGimmickBase* UHbkAnimInstance::GetHbkGimmick() const {
    return NULL;
}

AHbkCharacter* UHbkAnimInstance::GetHbkCharacter() const {
    return NULL;
}


