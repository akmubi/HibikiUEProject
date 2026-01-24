#include "HbkActivateKeyData.h"

FHbkActivateKeyData::FHbkActivateKeyData() {
    this->KeyMode = EHbkActivateKeyMode::UseTag;
    this->ActivateInt = 0;
    this->DeactivateInt = 0;
    this->bActivateInt = false;
    this->bDeactivateInt = false;
}

