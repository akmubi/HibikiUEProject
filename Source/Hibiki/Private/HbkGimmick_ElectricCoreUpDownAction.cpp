#include "HbkGimmick_ElectricCoreUpDownAction.h"

FHbkGimmick_ElectricCoreUpDownAction::FHbkGimmick_ElectricCoreUpDownAction() {
    this->UpCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->UpSignCount = 0;
    this->UpCount = 0;
    this->UpLength = 0.00f;
    this->DownCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->DownSignCount = 0;
    this->DownCount = 0;
}

