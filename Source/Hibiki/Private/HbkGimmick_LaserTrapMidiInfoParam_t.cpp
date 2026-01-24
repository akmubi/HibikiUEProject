#include "HbkGimmick_LaserTrapMidiInfoParam_t.h"

FHbkGimmick_LaserTrapMidiInfoParam_t::FHbkGimmick_LaserTrapMidiInfoParam_t() {
    this->StartFlag = false;
    this->AttackFlag = false;
    this->PrepareFlag = false;
    this->StopAttackFlag = false;
    this->LoopCnt = 0;
    this->ActionCnt = 0;
    this->pMidiSE = NULL;
}

