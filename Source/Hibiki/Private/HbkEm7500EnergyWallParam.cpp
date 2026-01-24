#include "HbkEm7500EnergyWallParam.h"

FHbkEm7500EnergyWallParam::FHbkEm7500EnergyWallParam() {
    this->NoteToNotice = EHbkNote::None;
    this->NoteCountToNotice = 0;
    this->NoteToAttack = EHbkNote::None;
    this->NoteCountToAttack = 0;
    this->NoteToEnd = EHbkNote::None;
    this->NoteCountToEnd = 0;
    this->ApexAngle = 0.00f;
    this->Distance = 0.00f;
    this->InitBottom = 0.00f;
    this->EasingFuncOfMove = EEasingFunc::Linear;
    this->BlendExpOfMove = 0.00f;
    this->StepsOfMove = 0;
}

