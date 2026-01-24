#include "HbkBeginRhythmScoreParam.h"

FHbkBeginRhythmScoreParam::FHbkBeginRhythmScoreParam() {
    this->UIType = EHbkRhythmScoreUIType::UI_SpecialRhythmAttack;
    this->ChangeStateEvent = NULL;
    this->bPlaySoundEvent = false;
    this->bPlayGuideSE = false;
    this->bImmediateStart = false;
    this->bPlayInputSE = false;
    this->EventInputFailed = NULL;
}

