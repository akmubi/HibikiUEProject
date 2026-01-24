#include "HbkNp0700_MowingDogStateInfo.h"

FHbkNp0700_MowingDogStateInfo::FHbkNp0700_MowingDogStateInfo() {
    this->PrevState = EHbkNp0700_MowingDogActionState::None;
    this->NextState = EHbkNp0700_MowingDogActionState::None;
    this->Weight = 0;
    this->AnimNote = 0;
    this->Margin = FIntPoint(0);
}

