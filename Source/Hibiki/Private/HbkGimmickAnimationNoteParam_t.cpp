#include "HbkGimmickAnimationNoteParam_t.h"

FHbkGimmickAnimationNoteParam_t::FHbkGimmickAnimationNoteParam_t() {
    this->ReverseCurveFlag = false;
    this->PlaytoNoteRate = false;
    this->OnlyUpdateOnBeat = false;
    this->CurveScale = 0.00f;
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->LoopBarCnt = 0;
    this->LoopBeatCnt = 0;
}

