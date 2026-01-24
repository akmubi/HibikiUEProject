#include "HbkGimmick_RockfallTrigger.h"

AHbkGimmick_RockfallTrigger::AHbkGimmick_RockfallTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaved = false;
    this->bActive = false;
}


