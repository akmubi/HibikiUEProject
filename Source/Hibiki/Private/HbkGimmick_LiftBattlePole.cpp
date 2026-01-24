#include "HbkGimmick_LiftBattlePole.h"

AHbkGimmick_LiftBattlePole::AHbkGimmick_LiftBattlePole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pWindowNoiseSE = NULL;
}

void AHbkGimmick_LiftBattlePole::OnCommonResourceSuccess() {
}


