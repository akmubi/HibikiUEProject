#include "HbkBreakableSkeletonComponent.h"

UHbkBreakableSkeletonComponent::UHbkBreakableSkeletonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatSpeedCurve = NULL;
    this->SuckCurve = NULL;
    this->SuckRadiusCurve = NULL;
    this->SuckAngleCurve = NULL;
    this->SuckSpeedCurve = NULL;
    this->SuckLocalRotSpeedCurve = NULL;
    this->MinStartDelay = 0.00f;
    this->MaxStartDelay = 0.50f;
    this->bSkipFloat = true;
    this->MinFloatHeight = 20.00f;
    this->MaxFloatHeight = 100.00f;
    this->FloatDuration = 1.00f;
    this->FadeInDuration = 0.50f;
    this->SuckCurveDuration = 4.00f;
    this->MinSuckCurveXScale = 0.50f;
    this->SuckRotationAngleDegree = 720.00f;
    this->MinSuckCurveTilt = -30.00f;
    this->MaxSuckCurveTilt = 30.00f;
    this->SuckLocalRotAngleSpeedDegree = 720.00f;
    this->bUseReflectSuckCurve = true;
    this->BoundsScale = 1000.00f;
}

void UHbkBreakableSkeletonComponent::SuckAlongNaviSplineCurve(const AActor* SuckActor) {
}

void UHbkBreakableSkeletonComponent::SuckAlongCurveAsset(const AActor* SuckActor) {
}

void UHbkBreakableSkeletonComponent::ScatterByRadialImpulse(FVector ImpulseOffset, float ImpulseRadius, float ImpulseStrength) {
}

void UHbkBreakableSkeletonComponent::Reset() {
}

void UHbkBreakableSkeletonComponent::BreakUp() {
}


