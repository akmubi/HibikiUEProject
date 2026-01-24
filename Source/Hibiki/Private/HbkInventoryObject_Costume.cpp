#include "HbkInventoryObject_Costume.h"
#include "EHbkInventoryPlayerItemCategory.h"

UHbkInventoryObject_Costume::UHbkInventoryObject_Costume() {
    this->PlayerItemCategory = EHbkInventoryPlayerItemCategory::Costume;
    this->bSetItemInventory = false;
    this->bOnly1stCostume = false;
    this->bOnly2ndCostume = false;
    this->WearCharacterType = EHbkPartnerType::None;
    this->CostumePartType = EHbkCostumePart::Setup;
}


