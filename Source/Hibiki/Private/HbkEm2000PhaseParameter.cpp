#include "HbkEm2000PhaseParameter.h"

FHbkEm2000PhaseParameter::FHbkEm2000PhaseParameter() {
    this->ActivateDriveRate = 0.00f;
    this->AttackIntervalNote = EHbkNote::None;
    this->AttackIntervalNoteCount = 0;
    this->FlexibleAttackRadius = 0.00f;
    this->FlexibleAttackNote = EHbkNote::None;
    this->FlexibleAttackNoteCount = 0;
    this->PipeSlalomNote = EHbkNote::None;
    this->PipeSlalomNoteCount = 0.00f;
    this->PickSlideStaggerNoteType = EHbkNote::None;
    this->PickSlideStaggerNoteCount = 0;
    this->PickSlideReceptionNoteType = EHbkNote::None;
    this->PickSlideReceptionNoteCount = 0;
    this->ThrowPipeChargedRate = 0.00f;
}

