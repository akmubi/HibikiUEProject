#include "HbkGimmickEmissiveParam_t.h"

FHbkGimmickEmissiveParam_t::FHbkGimmickEmissiveParam_t() {
    this->Index = 0;
    this->useEmiTex = false;
    this->useEmiColor = false;
    this->ColorType = LE_TYPE_GRAY;
    this->kindType = LE_TYPE_CIRCLE;
    this->ForceIntensity = 0.00f;
}

