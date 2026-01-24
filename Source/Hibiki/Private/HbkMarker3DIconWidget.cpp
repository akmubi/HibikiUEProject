#include "HbkMarker3DIconWidget.h"

UHbkMarker3DIconWidget::UHbkMarker3DIconWidget() {
    this->TargetObject = NULL;
    this->IsDestroyWhenLostTargetObject = false;
    this->IsClamp = true;
    this->IsAlwaysClamp = false;
    this->ClampType = EClampMarkerType::QUADRANGLE;
    this->RadiusRangeFromCenter = 0.00f;
    this->IsDrawRotateInWindow = false;
    this->IsDrawRotateOutWindow = true;
    this->IsHiddenInLength = false;
    this->IsDestroyInLength = false;
    this->HiddenOrDestroyInLength = 500.00f;
    this->IsHiddenOutLength = false;
    this->IsDestroyOutLength = false;
    this->HiddenOrDestroyOutLength = 1000.00f;
    this->IsChangeIconSizeFromLength = false;
    this->ChangeSizeFromLength = 500.00f;
    this->IsChangeIconAlphaFromLength = false;
    this->ChangeAlphaFromLength = 1000.00f;
    this->ChangeAlphaFromRange = 980.00f;
    this->DrawWidgetTime = 0.00f;
    this->MarkerTextureData = NULL;
    this->AccentTextureData = NULL;
    this->DrawTextureInClamp = NULL;
    this->DrawTextureOutClamp = NULL;
    this->IsChangeClampTexture = true;
    this->MarkerTextData = NULL;
    this->RangeTextData = NULL;
    this->LengthMinimumUnit = 10.00f;
    this->MarkerVectorTextureData = NULL;
    this->IsPlayStartAnim = false;
    this->IsPlayEndAnim = false;
}

void UHbkMarker3DIconWidget::WidgetVisible() {
}

void UHbkMarker3DIconWidget::WidgetHidden() {
}

void UHbkMarker3DIconWidget::StopDrawWidgetTime() {
}

void UHbkMarker3DIconWidget::StopAction(EHbkGameMarkerAction Action) {
}

void UHbkMarker3DIconWidget::SetTexture(UObject* NewDrawTextureInClamp, FVector2D NewDrawTextureSize) {
}

void UHbkMarker3DIconWidget::SetTargetObject(UObject* NewTargetObject) {
}

void UHbkMarker3DIconWidget::SetDrawWidgetTime(float NewTime) {
}

void UHbkMarker3DIconWidget::RestartDrawWidgetTime() {
}

void UHbkMarker3DIconWidget::ResetDrawWidgetTime() {
}

bool UHbkMarker3DIconWidget::PlayAction(EHbkGameMarkerAction Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool IsReset) {
    return false;
}

bool UHbkMarker3DIconWidget::IsMakerVisible() {
    return false;
}

bool UHbkMarker3DIconWidget::IsDebugCVarDrawIcon() {
    return false;
}

void UHbkMarker3DIconWidget::Invoke_DestroyMakerEvent() {
}

float UHbkMarker3DIconWidget::GetTargetAngle() {
    return 0.0f;
}

float UHbkMarker3DIconWidget::GetMarkerSizeRate() {
    return 0.0f;
}

float UHbkMarker3DIconWidget::GetMarkerAlphaRate() {
    return 0.0f;
}

float UHbkMarker3DIconWidget::GetLengthFromPlayerToTarget() {
    return 0.0f;
}

FVector2D UHbkMarker3DIconWidget::GetCenterPosition() {
    return FVector2D{};
}

bool UHbkMarker3DIconWidget::Function_IsClampRangeInTarget() {
    return false;
}

void UHbkMarker3DIconWidget::ForceRemoveMarker() {
}

void UHbkMarker3DIconWidget::EndDrawWidgetTime() {
}
















