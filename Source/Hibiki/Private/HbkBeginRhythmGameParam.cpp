#include "HbkBeginRhythmGameParam.h"

FHbkBeginRhythmGameParam::FHbkBeginRhythmGameParam() {
    this->ChangeStateEvent = NULL;
    this->bInterruptWhenFailed = false;
    this->bNotNotifyFailed = false;
    this->bPlaySoundEvent = false;
    this->bPlayGuideSE = false;
    this->bPlayPlayerMotion = false;
    this->bImmediateStart = false;
    this->bInSequencer = false;
    this->bPlayInputSE = false;
    this->EventInputFailed = NULL;
}

