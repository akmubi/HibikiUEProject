#include "HbkDecalPastingComponent.h"

UHbkDecalPastingComponent::UHbkDecalPastingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecalPastingAsset = NULL;
    this->TraceType = TraceTypeQuery1;
    this->TraceMarginLength = 50.00f;
    this->TestSocketName = TEXT("Origin");
    this->TestReflectDirection = EHbkDecalPastingReflectDirection::Actor;
}

void UHbkDecalPastingComponent::TraceDecalPasting() {
}

void UHbkDecalPastingComponent::SetDecalEnableAll(bool Enable) {
}

void UHbkDecalPastingComponent::SetDecalEnable(FName Key, bool Enable) {
}

void UHbkDecalPastingComponent::ResetParameter() {
}

void UHbkDecalPastingComponent::RemoveKeyConvert(FName Key) {
}

void UHbkDecalPastingComponent::RegistKeyConvert(FName Key, FName ToName) {
}

bool UHbkDecalPastingComponent::InitParameter(UHbkHbkDecalPastingAsset* Asset) {
    return false;
}

void UHbkDecalPastingComponent::DecalPasting(FName DecalKey, FName SocketName, FVector Direction, EHbkDecalPastingReflectDirection ReflectDirectionType) {
}

void UHbkDecalPastingComponent::ClearKeyConvert() {
}


