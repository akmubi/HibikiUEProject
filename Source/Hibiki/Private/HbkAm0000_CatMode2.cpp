#include "HbkAm0000_CatMode2.h"
#include "HbkCostumeComponent.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkAm0000_CatMode2::AHbkAm0000_CatMode2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("HbkCostumeComp"));
    this->EmissiveSlotName = TEXT("M_am0020_emissive");
    this->ColorOptionalName = TEXT("EmissiveColorTint");
    this->HbkCostumeMeshComp->SetupAttachment(GetMesh());
}

void AHbkAm0000_CatMode2::StopAnimation(float BlendOut) {
}

UAnimMontage* AHbkAm0000_CatMode2::PlayAnimation(UAnimSequenceBase* Anim, float PlayRate) {
    return NULL;
}

void AHbkAm0000_CatMode2::OnPostApplyCostume() {
}





void AHbkAm0000_CatMode2::JumpAnimSection(const FName& NextSection) {
}

bool AHbkAm0000_CatMode2::IsShown() const {
    return false;
}

bool AHbkAm0000_CatMode2::IsChangeIdleAnim() const {
    return false;
}


