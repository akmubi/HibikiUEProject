#include "HbkAltitudeControlParam.h"

FHbkAltitudeControlParam::FHbkAltitudeControlParam() {
    this->NoteType = EHbkNote::None;
    this->NoteCount = 0.00f;
    this->EasingFuncType = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
    this->EaseStep = 0;
}

