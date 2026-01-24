#include "HbkActionParamComponent.h"
#include "Net/UnrealNetwork.h"

UHbkActionParamComponent::UHbkActionParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionInfoAsset = NULL;
}

void UHbkActionParamComponent::SetActionTagParam(const FGameplayTag& ActTag, FHbkActionParam Param) {
}

void UHbkActionParamComponent::SetActionAnimParam(UAnimSequenceBase* Anim, FHbkActionParam Param) {
}

void UHbkActionParamComponent::PerformDamage(UAnimSequenceBase* Anim, FHbkDamageParam Param) {
}

void UHbkActionParamComponent::PerformActionWithParam(const FGameplayTag& ActTag, FHbkActionParam Param) {
}

void UHbkActionParamComponent::PerformAction(UAnimSequenceBase* Anim, FHbkActionParam Param) {
}

void UHbkActionParamComponent::OnRep_CurrentDamageRepParam() {
}

void UHbkActionParamComponent::OnRep_CurrentActionRepParam() {
}

FGameplayTag UHbkActionParamComponent::GetActionTag() {
    return FGameplayTag{};
}

TArray<FGameplayTag> UHbkActionParamComponent::GetActionKeyListWithTag(const FGameplayTag& ActTag) {
    return TArray<FGameplayTag>();
}

UAnimSequenceBase* UHbkActionParamComponent::GetActionAnimFromTag(const FGameplayTag& ActTag) {
    return NULL;
}

void UHbkActionParamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHbkActionParamComponent, CurrentActionRepParam);
    DOREPLIFETIME(UHbkActionParamComponent, CurrentDamageRepParam);
}


