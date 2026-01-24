#include "HbkGimmick_bg1080Startup.h"

FHbkGimmick_bg1080Startup::FHbkGimmick_bg1080Startup() {
    this->BlinkCount = 0;
    this->VarrtSoloSpotLightBlinkCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->VarrtSoloSpotLightBlinkNoteCount = 0;
    this->VarrtSoloSpotLightBrightenCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->VarrtSoloSpotLightBlinkBrightenNoteCount = 0;
    this->RoomOutsideSoloSpotCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->VarrtSoloSpotLightBlinkRange = FVector2D(0.0f);
    this->VarrtSoloSpotLightBrightenRange = FVector2D(0.0f);
    this->VarrtSoloSpotLightRange = FVector2D(0.0f);
}

