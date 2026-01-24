#include "HbkEm6000_GuardComponent.h"

UHbkEm6000_GuardComponent::UHbkEm6000_GuardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquipComponent = NULL;
    this->BarrierComponent = NULL;
    this->ShieldComponent = NULL;
    this->BossSelectTagComponent = NULL;
    this->ShieldClass = NULL;
    this->ShieldOffsetX = 0.00f;
    this->ShieldOffsetZ = 0.00f;
    this->ShieldLarpValue = 0.30f;
    this->FluffyMoveValue = 50.00f;
    this->FluffyLerpTimerMax = 10.00f;
    this->EscapeHitCheckLength = 1200.00f;
    this->EscapeHitForwardCheckLengthForMove = 100.00f;
    this->EscapeHitSideCheckLengthForMove = 100.00f;
    this->BarrierRepulsionCoreRadius = 0.00f;
    this->BarrierRepulsionPersonalRadius = 0.00f;
    this->ShieldRepulsionCoreRadius = 0.00f;
    this->ShieldRepulsionPersonalRadius = 0.00f;
    this->EscapeAnimationLength = 1.00f;
}

void UHbkEm6000_GuardComponent::UseShield() {
}

void UHbkEm6000_GuardComponent::UseEscapeShot(const AActor* Attacker, bool bUseBossSelectTag) {
}

void UHbkEm6000_GuardComponent::UseEscapeMove(bool bUseBossSelectTag) {
}

void UHbkEm6000_GuardComponent::UseEscape(bool bUseBossSelectTag) {
}

void UHbkEm6000_GuardComponent::UseBarrier() {
}

void UHbkEm6000_GuardComponent::StartShieldHoming() {
}

void UHbkEm6000_GuardComponent::SetSystemEnable(bool bIsEnable) {
}

void UHbkEm6000_GuardComponent::SetShieldShow(bool bIsVisible) {
}

void UHbkEm6000_GuardComponent::SetShieldEnable(bool bIsEnable, bool bIsShowHideActor) {
}

void UHbkEm6000_GuardComponent::SetEscapeDisable(bool bIsDisable) {
}

void UHbkEm6000_GuardComponent::SetBarrierShow(bool bIsVisible) {
}

void UHbkEm6000_GuardComponent::SetBarrierEnable(bool bIsEnable, bool bIsShowHideActor) {
}

void UHbkEm6000_GuardComponent::OnShieldBrokenAll() {
}

void UHbkEm6000_GuardComponent::OnBarrierDeactivate() {
}

bool UHbkEm6000_GuardComponent::IsSystemEnabled() const {
    return false;
}

bool UHbkEm6000_GuardComponent::IsShieldEnabled() const {
    return false;
}

bool UHbkEm6000_GuardComponent::IsPlayingDamageSlotAnimation() const {
    return false;
}

bool UHbkEm6000_GuardComponent::IsPlayingAnySlotAnimations() const {
    return false;
}

bool UHbkEm6000_GuardComponent::IsEscapeDisable() const {
    return false;
}

bool UHbkEm6000_GuardComponent::IsBarrierEnabled() const {
    return false;
}

bool UHbkEm6000_GuardComponent::CanUseShield() const {
    return false;
}

bool UHbkEm6000_GuardComponent::CanUseEscape() const {
    return false;
}

bool UHbkEm6000_GuardComponent::CanUseBarrier() const {
    return false;
}


