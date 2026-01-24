#include "HbkInventoryObject_FileItem.h"
#include "EHbkInventoryCategory.h"

UHbkInventoryObject_FileItem::UHbkInventoryObject_FileItem() {
    this->InventoryCategory = EHbkInventoryCategory::FileItem;
    this->FileItemCategory = EHbkInventoryFileItemCategory::None;
    this->ImageTexture = NULL;
}


