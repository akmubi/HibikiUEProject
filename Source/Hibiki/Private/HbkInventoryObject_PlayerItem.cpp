#include "HbkInventoryObject_PlayerItem.h"
#include "EHbkInventoryCategory.h"

UHbkInventoryObject_PlayerItem::UHbkInventoryObject_PlayerItem() {
    this->InventoryCategory = EHbkInventoryCategory::PlayerItem;
    this->PlayerItemCategory = EHbkInventoryPlayerItemCategory::None;
}


