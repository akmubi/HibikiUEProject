#include "HbkGesPostOutline.h"

FHbkGesPostOutline::FHbkGesPostOutline() {
    this->bOverrideDepthOutlineThreshold = false;
    this->DepthOutlineThreshold = 0.00f;
    this->bOverrideOutlineThickness = false;
    this->OutlineThickness = 0.00f;
    this->bOverrideDepthOutlineMinimumScale = false;
    this->DepthOutlineMinimumScale = 0.00f;
    this->bOverrideNormalOutlineThreshold = false;
    this->NormalOutlineThreshold = 0.00f;
    this->bOverrideNormalOutlineThickness = false;
    this->NormalOutlineThickness = 0.00f;
    this->bOverrideNormalOutlineCameraAttenStart = false;
    this->NormalOutlineCameraAttenStart = 0.00f;
    this->bOverrideNormalOutlineCameraAttenDistance = false;
    this->NormalOutlineCameraAttenDistance = 0.00f;
    this->bOverrideOutlineCameraFadeDistance = false;
    this->OutlineCameraFadeDistance = 0.00f;
    this->bOverrideOutlineCameraFadeMidDistance = false;
    this->OutlineCameraFadeMidDistance = 0.00f;
    this->bOverrideOutlineCameraFadeStrength = false;
    this->OutlineCameraFadeStrength = 0.00f;
    this->bOverrideOutlineColor = false;
    this->OutlineColor = FLinearColor(FColor(0));
}

