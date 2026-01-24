#include "HbkSplineMoveComponent.h"

UHbkSplineMoveComponent::UHbkSplineMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->defaultTickEnabled = false;
    this->gimmickBaseOnActivate = true;
    this->gimmickBaseOnReturnCheckPoint = true;
    this->reverseOnDeactivate = false;
    this->splineMoveType = SMTYPE_NONE;
    this->splineRhythmMoveType = SRTYPE_1MOVE0WAIT;
    this->splineCurveMoveType = EHbkGimmickCurveType_t::GimmickCurve_SplinePointMoveCurve;
    this->loopMove = true;
    this->defaultIndex = 0;
    this->offsetDistance = 0.00f;
    this->pMoveSplineActor = NULL;
}

void UHbkSplineMoveComponent::SetSplineSpeedInfo(FHbkSplineMoveSpeedInto_t l_speedInfo) {
}

void UHbkSplineMoveComponent::SetSplineInfo(TEnumAsByte<EHbkSplineMoveType_t> moveType, TEnumAsByte<EHbkSplineRhythmMoveType_t> rhythmType, EHbkGimmickCurveType_t curveType) {
}

void UHbkSplineMoveComponent::SetSplineCustomInfo(FHbkSplineMoveCustomMoveInfo_t l_customInfo) {
}

void UHbkSplineMoveComponent::RhythmEvent_SplineMoveType_Speed(int32 BeatCount, bool bDownBeat) {
}

void UHbkSplineMoveComponent::RhythmEvent_SplineMoveType_Point(int32 BeatCount, bool bDownBeat) {
}

void UHbkSplineMoveComponent::OnLoadSuccessForReturnCheckPoint() {
}

void UHbkSplineMoveComponent::OnGimmickComponentReturnCheckPoint(AActor* Activator, FName CPName) {
}

void UHbkSplineMoveComponent::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkSplineMoveComponent::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkSplineMoveComponent::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkSplineMoveComponent::OnGimmickComponentActivate(AActor* Activator) {
}

bool UHbkSplineMoveComponent::IsActiveMove() {
    return false;
}

FTransform UHbkSplineMoveComponent::GetSplineMoveWorldTransform(const float Distance) {
    return FTransform{};
}

FRotator UHbkSplineMoveComponent::GetSplineMoveWorldRotator() {
    return FRotator{};
}

FVector UHbkSplineMoveComponent::GetSplineMoveWorldLocationForDistance(float Distance) {
    return FVector{};
}

FVector UHbkSplineMoveComponent::GetSplineMoveWorldLocation2(const float Distance) {
    return FVector{};
}

FVector UHbkSplineMoveComponent::GetSplineMoveWorldLocation() {
    return FVector{};
}

float UHbkSplineMoveComponent::GetDistanceForPoint(const int32 startIndex) {
    return 0.0f;
}


