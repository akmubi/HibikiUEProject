#include "HbkCostumeWidgetModelActor.h"
#include "HbkPrevCostumeSpringArmComponent.h"
#include "HbkPreviewCostumeComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkCostumeWidgetModelActor::AHbkCostumeWidgetModelActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraParamTable = NULL;
    this->AttachParamTable = NULL;
    this->SpringArm = CreateDefaultSubobject<UHbkPrevCostumeSpringArmComponent>(TEXT("SpringArm"));
    this->PreviewCostumeComp = CreateDefaultSubobject<UHbkPreviewCostumeComponent>(TEXT("PreviewCostumeComp"));
    this->CharaType = EHbkPartnerType::None;
    this->bEnableCostume = true;
    this->NoInputTimeMax = 10.00f;
    this->PlayMontage = NULL;
    this->ToEquipOffset = -70.00f;
    this->ToStoreOffset = 100.00f;
    this->ToEquipRelativeRot = 0.00f;
    this->ToStoreRelativeRot = 0.00f;
    this->VisibleAttachActorIndex = 0;
    this->SpringArm->SetupAttachment(GetMesh());
}

void AHbkCostumeWidgetModelActor::SetVisibilityAttachActor(int32 Index, bool bVisible) {
}

void AHbkCostumeWidgetModelActor::SetVisibilityActor(bool bVisible) {
}

void AHbkCostumeWidgetModelActor::RotateCharacter(float AddYaw) {
}

void AHbkCostumeWidgetModelActor::ResetWidgetInputState() {
}

void AHbkCostumeWidgetModelActor::ResetSection() {
}

void AHbkCostumeWidgetModelActor::ResetRotateCharacter() {
}

void AHbkCostumeWidgetModelActor::OnPostApplyCostume(EHbkCostumePart ApplyPart, const FGameplayTag ApplyTag) {
}

bool AHbkCostumeWidgetModelActor::GetWidgetInputState() const {
    return false;
}

USpringArmComponent* AHbkCostumeWidgetModelActor::GetSpringArm() const {
    return NULL;
}

bool AHbkCostumeWidgetModelActor::GetEnableAccentMotion() const {
    return false;
}

EHbkPartnerType AHbkCostumeWidgetModelActor::GetCharaType() const {
    return EHbkPartnerType::None;
}

bool AHbkCostumeWidgetModelActor::ChangeSelectedPart(EHbkCostumePart PartType, bool bEnableCameraLag) {
    return false;
}









