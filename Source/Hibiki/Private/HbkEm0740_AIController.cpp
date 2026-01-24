#include "HbkEm0740_AIController.h"

AHbkEm0740_AIController::AHbkEm0740_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstBurningIntervalTimeCount = 24.00f;
    this->BurningIntervalTimeCount_Min = 28.00f;
    this->BurningIntervalTimeCount_Max = 36.00f;
    this->CounterAttackRequestDamageCountMin = 2;
    this->CounterAttackRequestDamageCountMax = 5;
}

void AHbkEm0740_AIController::SetUpBurningIntervalRandomRange() {
}

void AHbkEm0740_AIController::SetEnabledBurningState(bool bEnabled) {
}

void AHbkEm0740_AIController::SetCounterAttackRequestDamageCount(int32 Count) {
}

void AHbkEm0740_AIController::SetCounterAttackRequest(bool bEnabled) {
}

void AHbkEm0740_AIController::SetBurningIntervalTime(float Count) {
}

void AHbkEm0740_AIController::SetAvoidAttack(bool bEnabled) {
}

bool AHbkEm0740_AIController::IsEnabledBurningState() const {
    return false;
}

bool AHbkEm0740_AIController::GetCounterAttackRequest() const {
    return false;
}

float AHbkEm0740_AIController::GetBurningIntervalTimer() const {
    return 0.0f;
}

bool AHbkEm0740_AIController::GetAvoidAttack() const {
    return false;
}


