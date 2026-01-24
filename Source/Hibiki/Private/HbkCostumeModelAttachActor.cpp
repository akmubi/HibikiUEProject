#include "HbkCostumeModelAttachActor.h"
#include "HbkPreviewCostumeComponent.h"

AHbkCostumeModelAttachActor::AHbkCostumeModelAttachActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartType = EHbkCostumePart::Setup;
    this->PreviewCostumeComp = CreateDefaultSubobject<UHbkPreviewCostumeComponent>(TEXT("PreviewCostumeComp"));
    this->PlayMontage = NULL;
}

void AHbkCostumeModelAttachActor::OnPostApplyCostume(EHbkCostumePart ApplyPart, const FGameplayTag ApplyTag) {
}

AHbkCostumeWidgetModelActor* AHbkCostumeModelAttachActor::GetOwnerModel() const {
    return NULL;
}

void AHbkCostumeModelAttachActor::EquipPreviewCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart) {
}

void AHbkCostumeModelAttachActor::EquipCostume(const FGameplayTag& CostumeID, EHbkCostumePart CostumePart) {
}

void AHbkCostumeModelAttachActor::EndEquipPreviewCostume() {
}


