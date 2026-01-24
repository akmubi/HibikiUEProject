#include "HbkGimmickBoneAnimNoteParam.h"

FHbkGimmickBoneAnimNoteParam::FHbkGimmickBoneAnimNoteParam() {
    this->ReverseCurveFlag = false;
    this->CurveScale = 0.00f;
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
}

