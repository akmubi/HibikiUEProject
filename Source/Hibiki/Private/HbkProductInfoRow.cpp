#include "HbkProductInfoRow.h"

FHbkProductInfoRow::FHbkProductInfoRow() {
    this->Category = EHbkProductCategory::None;
    this->StockNumMax = 0;
    this->Price = 0;
    this->CircuitCost = 0;
    this->ClearStageNo = 0;
    this->PartnerType = EHbkPartnerType::None;
    this->ItemCount = 0;
}

