#include "HbkGimmickEmissiveComponent.h"

UHbkGimmickEmissiveComponent::UHbkGimmickEmissiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->SaveType = EHbkGimmickEmissiveComp_EmType::PT_NONE;
    this->SaveExtInt = 0;
    this->DefaultActivateColor = false;
}

void UHbkGimmickEmissiveComponent::SetMoveEndEmissiveColor() {
}

void UHbkGimmickEmissiveComponent::SetDefaultEmissiveColor() {
}

void UHbkGimmickEmissiveComponent::SetDeactivateEmissiveColor() {
}

void UHbkGimmickEmissiveComponent::SetActivateEmissiveColor() {
}

void UHbkGimmickEmissiveComponent::OnReturnCheckPointComponent(AActor* Activator, FName CPName) {
}

void UHbkGimmickEmissiveComponent::OnMoveEnd() {
}

void UHbkGimmickEmissiveComponent::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHbkGimmickEmissiveComponent::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentEndBattle() {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentDeactivate(AActor* Activator) {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentBeginBattle() {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickEmissiveComponent::OnGimmickComponentActivate(AActor* Activator) {
}

void UHbkGimmickEmissiveComponent::OnCommonResourceSuccess() {
}

void UHbkGimmickEmissiveComponent::CopyGimmickEmissiveComp(AActor* pActor) {
}


