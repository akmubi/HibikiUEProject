#include "HbkEm0600_Airbot.h"

AHbkEm0600_Airbot::AHbkEm0600_Airbot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->bFlyingDurationEnable = false;
    this->pAirbotMoveCurveAsset = NULL;
    this->AcceptanceRadius = 88.00f;
}


