#include "HbkAltitudeControlComponent.h"

UHbkAltitudeControlComponent::UHbkAltitudeControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnable = true;
    this->SocketName = TEXT("Origin");
    this->CollisionType = ECC_Visibility;
    this->CheckTraceLength = 2000.00f;
    this->bIsTraceComplex = false;
    this->Altitude = 0.00f;
    this->AltitudeTarget = 0.00f;
    this->AltitudePrev = 0.00f;
    this->AltitudePriority = 0;
    this->ControlTime = 0.00f;
    this->ControlTimeMax = 0.00f;
    this->TestAdjustAltitudeValue = 300.00f;
}

void UHbkAltitudeControlComponent::TestCancelAdjustAltitude() {
}

void UHbkAltitudeControlComponent::TestAdjustAltitude() {
}

void UHbkAltitudeControlComponent::SetEnable(bool Enable) {
}

void UHbkAltitudeControlComponent::CancelAdjustAltitude() {
}

void UHbkAltitudeControlComponent::AdjustAltitudeWithParam(float InAltitude, const FHbkAltitudeControlParam& InParam, int32 Priority) {
}

void UHbkAltitudeControlComponent::AdjustAltitude(float InAltitude, int32 Priority) {
}


