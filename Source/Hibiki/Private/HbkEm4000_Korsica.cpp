#include "HbkEm4000_Korsica.h"

AHbkEm4000_Korsica::AHbkEm4000_Korsica(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->IdleType = EHbkEm4000IdleType::Upright;
}

void AHbkEm4000_Korsica::RestartChangeHealth() {
}

void AHbkEm4000_Korsica::RequestCallOnChangeHealth() {
}

void AHbkEm4000_Korsica::OnExAttack(const FGameplayTag& ExAttackTag) {
}

AHbkEm4000_AIController* AHbkEm4000_Korsica::GetEm4000AI() const {
    return NULL;
}



