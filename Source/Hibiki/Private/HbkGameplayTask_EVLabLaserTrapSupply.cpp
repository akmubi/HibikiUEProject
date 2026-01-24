#include "HbkGameplayTask_EVLabLaserTrapSupply.h"

FHbkGameplayTask_EVLabLaserTrapSupply::FHbkGameplayTask_EVLabLaserTrapSupply() {
    this->bSupplyNextLaserTrap = false;
    this->bSkipSupply = false;
    this->bUseLaserTrapCamera = false;
    this->SetupSE = NULL;
}

