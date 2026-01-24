#include "HbkEm6000_BehaviorPhase2Component.h"

UHbkEm6000_BehaviorPhase2Component::UHbkEm6000_BehaviorPhase2Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthRateForBarrier = 0.75f;
    this->HealthRateForShield = 0.25f;
}

bool UHbkEm6000_BehaviorPhase2Component::OnHealthLowerEventForShield(float TriggerHealthRate, float CurrentHealthRate) {
    return false;
}

bool UHbkEm6000_BehaviorPhase2Component::OnHealthLowerEventForBarrier(float TriggerHealthRate, float CurrentHealthRate) {
    return false;
}

bool UHbkEm6000_BehaviorPhase2Component::OnActionEventForShield(float DeltaTime, float ElapsedTime) {
    return false;
}

bool UHbkEm6000_BehaviorPhase2Component::OnActionEventForBarrier(float DeltaTime, float ElapsedTime) {
    return false;
}


