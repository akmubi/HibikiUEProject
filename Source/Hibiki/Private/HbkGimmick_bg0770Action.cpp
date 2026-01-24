#include "HbkGimmick_bg0770Action.h"

FHbkGimmick_bg0770Action::FHbkGimmick_bg0770Action() {
    this->OverheatCount = 0;
    this->SignOverheatEndCount = 0;
    this->WarningOverheatEndCount = 0;
    this->StartOverheatBgmRef = NULL;
    this->StartOverheatSeRef = NULL;
    this->RunNormalPlaySeRef = NULL;
    this->RunNormalStopSeRef = NULL;
    this->RunGamePlaySeRef = NULL;
    this->RunGameStopSeRef = NULL;
    this->EndOverheatSeRef = NULL;
    this->ChangeIndicatorSeRef = NULL;
    this->bUseOverheatTimerSE = false;
    this->OverheatTimerSE = NULL;
}

