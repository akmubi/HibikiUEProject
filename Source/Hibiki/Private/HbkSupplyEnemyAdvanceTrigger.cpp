#include "HbkSupplyEnemyAdvanceTrigger.h"

AHbkSupplyEnemyAdvanceTrigger::AHbkSupplyEnemyAdvanceTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BattleTrigger = NULL;
}


