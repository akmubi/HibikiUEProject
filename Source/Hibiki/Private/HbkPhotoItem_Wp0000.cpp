#include "HbkPhotoItem_Wp0000.h"
#include "HbkPhotoWeaponCostumeComponent.h"

AHbkPhotoItem_Wp0000::AHbkPhotoItem_Wp0000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHbkPhotoWeaponCostumeComponent>(TEXT("HbkCostumeComp"))) {
    this->bRealGuitarMode = false;
    this->EmissiveSlotName1 = TEXT("M_wp0290_emi");
    this->EmissiveSlotName2 = TEXT("M_wp0290_emi2");
    this->EmissiveSlotName1_Play = TEXT("M_wp0290_emi3");
    this->EmissiveSlotName2_Play = TEXT("M_wp0290_emi4");
    this->EmissiveOptionalName = TEXT("EmissiveIntensity");
    this->ColorOptionalName = TEXT("EmissiveColorTint");
    this->MeshKitName1 = TEXT("MK_base");
    this->MeshKitName2 = TEXT("MK_play");
}


