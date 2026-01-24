#include "HbkBezierMoveComponent.h"

UHbkBezierMoveComponent::UHbkBezierMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndLocationInterpSpeed = 1.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->MoveSeconds = 0.00f;
    this->WorkMoveSeconds = 0.00f;
    this->RatioEasingType = EEasingFunc::Linear;
    this->RatioBlendExp = 2.00f;
    this->MoveCurveAsset = NULL;
    this->IsAdjustRotation = false;
    this->IsDebugDraw = false;
}

void UHbkBezierMoveComponent::StartMove(AActor* InEndLocationActor, FVector InEndLocation, FVector InStartControlOffset, FVector InEndControlOffset, float Seconds, TEnumAsByte<EEasingFunc::Type> EasingFuncType, UCurveFloat* NewMoveCurveAsset, bool AdjustRotation) {
}

FVector UHbkBezierMoveComponent::GetBezierLocation(float T) {
    return FVector{};
}

float UHbkBezierMoveComponent::GetBezierLength(int32 dev) {
    return 0.0f;
}

void UHbkBezierMoveComponent::AbortMove() {
}


