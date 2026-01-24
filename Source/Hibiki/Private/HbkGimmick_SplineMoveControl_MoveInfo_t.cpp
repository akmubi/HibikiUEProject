#include "HbkGimmick_SplineMoveControl_MoveInfo_t.h"

FHbkGimmick_SplineMoveControl_MoveInfo_t::FHbkGimmick_SplineMoveControl_MoveInfo_t() {
    this->Loop = false;
    this->rotate = false;
    this->moveCnt = 0;
    this->waitCnt = 0;
    this->alongPoint = false;
    this->moveSpeed = 0.00f;
    this->moveValue = 0.00f;
    this->intervalSec = 0.00f;
}

