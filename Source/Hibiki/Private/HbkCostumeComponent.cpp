#include "HbkCostumeComponent.h"

UHbkCostumeComponent::UHbkCostumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Costume_DT = NULL;
    this->bEnableCache = false;
    this->SyncCostumeType = EHbkCostumeSyncType::None;
    this->bUseSyncAfterSpawn = false;
    this->bIgnoreOverlapCostume = false;
    this->bDeferredInitialize = false;
}

void UHbkCostumeComponent::SwitchFaceMaterialToMaskShadow(FName FaceMaterialSlotName) {
}

void UHbkCostumeComponent::NotifyPlayerCostumeKitChanged(const FGameplayTagContainer& NewCostumeKitTags) {
}

void UHbkCostumeComponent::NotifyPartnerCostumeChanged(EHbkPartnerType PartnerType, const FGameplayTag& NewCostumeTag) {
}

bool UHbkCostumeComponent::IsSetupDefaultCostumeBySystem() const {
    return false;
}

bool UHbkCostumeComponent::IsMatchCurrentPartnerCostumes(UObject* WorldContextObject, EHbkPartnerType PartnerType, const FGameplayTagContainer& TestCostumeTags) {
    return false;
}

void UHbkCostumeComponent::InitializeCostumeComponent(UHbkFaceShadowComponent* FaceShadowComp, EHbkCostumeSyncType SyncCostume, bool UseSyncAfterSpawn, bool IgnoreOverlapCostume) {
}

void UHbkCostumeComponent::ChangeDefaultCostume() {
}

void UHbkCostumeComponent::ChangeCostumeKit(const FGameplayTagContainer& NewCostumeTags) {
}

void UHbkCostumeComponent::ChangeCostume(const FGameplayTag& NewCostumeTag) {
}


