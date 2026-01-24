#include "HbkGimmick_LightStandMaterialInfo_t.h"

FHbkGimmick_LightStandMaterialInfo_t::FHbkGimmick_LightStandMaterialInfo_t() {
    this->useBaseColorParam = false;
    this->useEmissiveColorParam = false;
    this->useEmissiveTexture = false;
    this->useEmissiveIntensity = false;
    this->ColorType = LE_TYPE_GRAY;
    this->kindType = LE_TYPE_CIRCLE;
}

