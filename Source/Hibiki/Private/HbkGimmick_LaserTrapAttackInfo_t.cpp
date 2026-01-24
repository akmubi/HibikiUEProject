#include "HbkGimmick_LaserTrapAttackInfo_t.h"

FHbkGimmick_LaserTrapAttackInfo_t::FHbkGimmick_LaserTrapAttackInfo_t() {
    this->prepareSE = NULL;
    this->attackSE = NULL;
    this->noStopOnTheBeat = false;
    this->noDelayPrepareSE = false;
    this->noPrepareSE = false;
    this->noAttackSE = false;
    this->OnlyFirstAttackSound = false;
    this->OnlyFirstWaitSound = false;
    this->deadContinueParyCnt = 0;
    this->deadContinueParyMaxTime = 0.00f;
    this->delayBeatCount = 0;
    this->returnStartBeatCount = 0;
    this->attackBeatCount = 0;
    this->waitBeatCount = 0;
    this->MaxMidiLoopCnt = 0;
    this->OverrideDamageAmount = 0.00f;
}

