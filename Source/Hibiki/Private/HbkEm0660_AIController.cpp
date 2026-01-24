#include "HbkEm0660_AIController.h"

AHbkEm0660_AIController::AHbkEm0660_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraParamName_Far = TEXT("EnemyCamera_Revenger");
    this->FirstBurningIntervalTimeCount = 0.00f;
    this->BurningIntervalTimeCount_Min = 20.00f;
    this->BurningIntervalTimeCount_Max = 24.00f;
    this->EnabledBombLaunchRemainingNum = 1;
    this->WWingThrowLoopTimeCount = 25.00f;
}

void AHbkEm0660_AIController::SetUpBurningIntervalRandomRange() {
}

void AHbkEm0660_AIController::SetEnabledBurningState(bool bEnabled) {
}

void AHbkEm0660_AIController::SetBurningIntervalTime(float Count) {
}

bool AHbkEm0660_AIController::IsEnabledLaunchProjectileBomb() const {
    return false;
}

bool AHbkEm0660_AIController::IsEnabledBurningState() const {
    return false;
}

float AHbkEm0660_AIController::GetBurningIntervalTimer() const {
    return 0.0f;
}


