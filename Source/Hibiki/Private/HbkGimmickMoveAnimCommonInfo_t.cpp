#include "HbkGimmickMoveAnimCommonInfo_t.h"

FHbkGimmickMoveAnimCommonInfo_t::FHbkGimmickMoveAnimCommonInfo_t() {
    this->AnimType = GMR_TYPE_NONE;
    this->beatType = GMRA_TYPE_NONE;
    this->moveAnimType = GMA_TYPE_NONE;
    this->delayBeat = 0;
    this->changeCurve = false;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
}

