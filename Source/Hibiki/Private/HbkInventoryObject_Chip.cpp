#include "HbkInventoryObject_Chip.h"
#include "EHbkInventoryPlayerItemCategory.h"

UHbkInventoryObject_Chip::UHbkInventoryObject_Chip() {
    this->PlayerItemCategory = EHbkInventoryPlayerItemCategory::Chip;
    this->ChipType = EHbkPlayerChipType::None;
    this->Level = 0;
}


