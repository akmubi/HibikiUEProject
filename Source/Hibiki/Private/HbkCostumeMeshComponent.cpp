#include "HbkCostumeMeshComponent.h"

UHbkCostumeMeshComponent::UHbkCostumeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->PartCategory = EHbkCostumePart::Setup;
    this->CostumeMesh = NULL;
}

void UHbkCostumeMeshComponent::ShowMeshKit(FName KitName, bool bShow, int32 LODIndex) {
}

void UHbkCostumeMeshComponent::ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex) {
}

void UHbkCostumeMeshComponent::ShowDefaultMeshKit(int32 LODIndex) {
}

void UHbkCostumeMeshComponent::RemoveCostume() {
}

bool UHbkCostumeMeshComponent::PutOnCostume(const FGameplayTag& NewCostumeTag, USkeletalMesh* NewMesh) {
    return false;
}


