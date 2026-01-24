#include "HbkPartnerCharacterBase.h"
#include "HbkCostumeComponent.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkEquipComponent.h"
#include "HbkFaceShadowComponent.h"
#include "HbkPartnerAttackControlComponent.h"
#include "HbkPartnerAttackInfoComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkPartnerCharacterBase::AHbkPartnerCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->attackInfo = CreateDefaultSubobject<UHbkPartnerAttackInfoComponent>(TEXT("attackInfo"));
    this->AttackControl = CreateDefaultSubobject<UHbkPartnerAttackControlComponent>(TEXT("AttackControl"));
    this->HbkEquip = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("HbkEquip"));
    this->HbkFaceShadow = CreateDefaultSubobject<UHbkFaceShadowComponent>(TEXT("HbkFaceShadow"));
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("HbkCostumeComp"));
    this->PartnerType = EHbkPartnerType::None;
    this->RotateCurveName = TEXT("rotate");
    this->HbkCostumeMeshComp->SetupAttachment(GetMesh());
}

void AHbkPartnerCharacterBase::Receive_OnEndedInterpPosition(bool bInterrupted) {
}

void AHbkPartnerCharacterBase::Receive_OnEndContinuousSPA() {
}

void AHbkPartnerCharacterBase::Receive_OnDisappearMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkPartnerCharacterBase::Receive_OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkPartnerCharacterBase::Receive_OnAppearMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkPartnerCharacterBase::Receive_OnActionMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AHbkPartnerCharacterBase::Receive_OnAbortContinuousSPA() {
}

void AHbkPartnerCharacterBase::JumpSectionCurrentAttack(const FName& SectionName, bool bAnimBlend) {
}

bool AHbkPartnerCharacterBase::IsWaitingAction_Implementation(const FGameplayTag& ActionTag) const {
    return false;
}

UHbkPartnerAnimInstance* AHbkPartnerCharacterBase::GetPartnerAnimInstance() const {
    return NULL;
}

FGameplayTag AHbkPartnerCharacterBase::GetActionTypeTag() const {
    return FGameplayTag{};
}



