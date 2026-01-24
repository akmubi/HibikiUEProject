#include "HbkGimmick_MagnetRailCamera_CameraBlend.h"

FHbkGimmick_MagnetRailCamera_CameraBlend::FHbkGimmick_MagnetRailCamera_CameraBlend() {
    this->BlendTime = 0.00f;
    this->BlendFunc = VTBlend_Linear;
    this->BlendExp = 0.00f;
    this->bBlendLockOutgoing = false;
}

