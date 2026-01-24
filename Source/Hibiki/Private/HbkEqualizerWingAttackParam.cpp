#include "HbkEqualizerWingAttackParam.h"

FHbkEqualizerWingAttackParam::FHbkEqualizerWingAttackParam() {
    this->Process = EHbkEqualizerWingProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->DamageType = NULL;
    this->LocationOffset = FVector(0.0f);
    this->RotationOffset = FRotator(0.0f);
}

