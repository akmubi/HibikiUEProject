#include "HbkEm6000CommandBattleBasicParameter.h"

FHbkEm6000CommandBattleBasicParameter::FHbkEm6000CommandBattleBasicParameter() {
    this->PreJustSuccessNoteType = EHbkNote::None;
    this->PreJustSuccessNoteCount = 0.00f;
    this->PostJustSuccessNoteType = EHbkNote::None;
    this->PostJustSuccessNoteCount = 0.00f;
    this->FailureDamageType = NULL;
}

