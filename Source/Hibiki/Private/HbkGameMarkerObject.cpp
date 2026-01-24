#include "HbkGameMarkerObject.h"

UHbkGameMarkerObject::UHbkGameMarkerObject() {
    this->IsClamp = true;
    this->IsAlwaysClamp = false;
    this->ClampTypeIsCircle = false;
    this->RadiusRangeFromCenter = 0.00f;
    this->IsDrawTexture = true;
    this->IsChangeClampTexture = true;
    this->DrawTextureInClamp = NULL;
    this->DrawTextureOutClamp = NULL;
    this->IsDrawText = false;
    this->IsChangeClampText = false;
    this->TextSize = 24.00f;
    this->TextOutLineSize = 0.00f;
    this->IsDrawRangeText = true;
    this->IsDrawRangeTextInClamp = true;
    this->IsDrawRangeTextOutClamp = true;
    this->IsDrawRangeTextInRadiusFromCenter = true;
    this->RangeTextSize = 24.00f;
    this->RangeTextOutLineSize = 0.00f;
    this->IsDrawRotateInWindow = false;
    this->IsDrawRotateOutWindow = true;
    this->IsHiddenInLength = false;
    this->IsDestroyInLength = false;
    this->HiddenOrDestroyInLength = 500.00f;
    this->IsHiddenOutLength = false;
    this->IsDestroyOutLength = false;
    this->HiddenOrDestroyOutLength = 1000.00f;
    this->IsChangeIconSizeFromLength = false;
    this->ChangeIconSizeFromLength = 500.00f;
    this->IsChangeIconAlphaFromLength = false;
    this->ChangeIconAlphaFromLength = 1000.00f;
    this->ChangeIconAlphaFromRange = 980.00f;
    this->IsAutoTimerDestroy = false;
    this->DrawWidgetTime = 0.00f;
    this->IsDestroyWhenLostTargetObject = false;
    this->IsPlayStartAnim = false;
    this->StartAnim = EHbkGameMarkerAction::MarkerAction_Zoom;
    this->StartAnimLoopNum = 1;
    this->StartAnimPlayMode = EUMGSequencePlayMode::Forward;
    this->StartAnimPlaySpeed = 1.00f;
    this->IsPlayEndAnim = false;
    this->EndAnim = EHbkGameMarkerAction::MarkerAction_Zoom;
    this->EndAnimLoopNum = 1;
    this->EndAnimPlayMode = EUMGSequencePlayMode::Reverse;
    this->EndAnimPlaySpeed = 1.00f;
}


