#include "HbkPlayerWeapon.h"
#include "HbkPlayerWeaponCostumeComponent.h"

AHbkPlayerWeapon::AHbkPlayerWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkPlayerWeaponCostumeComponent>(TEXT("HbkCostumeComp"));
    this->bRealGuitarMode = false;
    this->bPlayIdleAnim = false;
    this->EmissiveSlotName1 = TEXT("M_wp0290_emi");
    this->EmissiveSlotName2 = TEXT("M_wp0290_emi2");
    this->EmissiveSlotName1_Play = TEXT("M_wp0290_emi3");
    this->EmissiveSlotName2_Play = TEXT("M_wp0290_emi4");
    this->EmissiveOptionalName = TEXT("EmissiveIntensity");
    this->ColorOptionalName = TEXT("EmissiveColorTint");
    this->MeshKitName1 = TEXT("MK_base");
    this->MeshKitName2 = TEXT("MK_play");
}

void AHbkPlayerWeapon::SetSkeletalMesh(UHbkSkeletalMeshComponent* MeshComp, USkeletalMesh* Mesh, bool bReinitPose) {
}

void AHbkPlayerWeapon::SetMeshCompToSlot(EHbkPlayerWeaponSlotType SlotType, UHbkSkeletalMeshComponent* MeshComp) {
}

void AHbkPlayerWeapon::PlayWeaponAnimWithSlot(EHbkPlayerWeaponSlotType SlotType, UAnimSequenceBase* Asset, FName SlotName, float BlendIn, float BlendOut, float PlayRate) {
}

void AHbkPlayerWeapon::OnRhythmSignEmissiveChange(float Intensity) {
}

void AHbkPlayerWeapon::OnRhythmSignColorChange(FLinearColor Color) {
}

void AHbkPlayerWeapon::OnPostApplyCostume() {
}

void AHbkPlayerWeapon::OnChangeRhythmRank(int32 NewRank, int32 OldRank) {
}

void AHbkPlayerWeapon::OnBattleEnded() {
}

bool AHbkPlayerWeapon::IsRealGuitarMode() const {
    return false;
}

bool AHbkPlayerWeapon::GetSlot(EHbkPlayerWeaponSlotType SlotType, FHbkPlayerWeaponSlot& OutSlot) {
    return false;
}


