#include "HbkCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

UHbkCharacterMovementComponent::UHbkCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bKnockbackEnabled = true;
    this->DefWalkSpeed = 145.00f;
}

void UHbkCharacterMovementComponent::SetMoveWalk() {
}

void UHbkCharacterMovementComponent::SetMoveRun() {
}

void UHbkCharacterMovementComponent::SetKnockback(FVector KnockbackDir, float Knockback) {
}

void UHbkCharacterMovementComponent::SetFlightDuration(float Duration) {
}

void UHbkCharacterMovementComponent::OnRep_RunMoveMode() {
}

bool UHbkCharacterMovementComponent::IsMoveRun() const {
    return false;
}

bool UHbkCharacterMovementComponent::IsJumping() const {
    return false;
}

bool UHbkCharacterMovementComponent::IsDuringFlight() const {
    return false;
}

bool UHbkCharacterMovementComponent::IsAirMovementMode() const {
    return false;
}

void UHbkCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHbkCharacterMovementComponent, MovementRepParam);
}


