#include "HbkEm0600_AIController.h"

AHbkEm0600_AIController::AHbkEm0600_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovableLength = 500.00f;
}

void AHbkEm0600_AIController::UpdateMoveState(float DeltaTime, TEnumAsByte<HbkAIUpdate::Type>& ResultExec) {
}

void AHbkEm0600_AIController::SetMovingRotateParam(bool IsLookingTarget, bool IsLookingGoal) {
}

void AHbkEm0600_AIController::OnBeatEvent(int32 NoteCount) {
}

FVector AHbkEm0600_AIController::GetMovedVelociry() {
    return FVector{};
}

FVector AHbkEm0600_AIController::GetMovedDirection() {
    return FVector{};
}

void AHbkEm0600_AIController::EndMoveState() {
}

void AHbkEm0600_AIController::BeginMoveState(AActor* TargetActor, const FVector GoalLocation, const float AcceptanceRadius) {
}


