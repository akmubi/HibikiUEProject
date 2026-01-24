#include "HbkEnvOutlineTableRow.h"

FHbkEnvOutlineTableRow::FHbkEnvOutlineTableRow() {
    this->DepthOutlineType = EHbkDepthOutlineType::InsideOnly;
    this->DepthOutlineFarDistance = 0.00f;
    this->DepthOutlineThreshold = 0.00f;
    this->OutlineThickness = 0.00f;
    this->DepthOutlineMinimumScale = 0.00f;
    this->NormalOutlineThreshold = 0.00f;
    this->bNormalOutlineVariableThickness = false;
    this->NormalOutlineThickness = 0.00f;
    this->NormalOutlineCameraAttenStart = 0.00f;
    this->NormalOutlineCameraAttenDistance = 0.00f;
    this->OutlineCameraFadeDistance = 0.00f;
    this->OutlineCameraFadeMidDistance = 0.00f;
    this->OutlineCameraFadeStrength = 0.00f;
    this->OutlineColor = FLinearColor(FColor(0));
}

