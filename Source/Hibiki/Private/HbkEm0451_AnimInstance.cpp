#include "HbkEm0451_AnimInstance.h"

UHbkEm0451_AnimInstance::UHbkEm0451_AnimInstance() {
    this->DamageAngle = 0.00f;
    this->bIsDamage = false;
}

void UHbkEm0451_AnimInstance::SetSpearState(ECentaur_SpearState NewState) {
}

void UHbkEm0451_AnimInstance::SetSpearAttackType(ECentaur_SpearAttackType NewType) {
}

void UHbkEm0451_AnimInstance::SetOwnerIsMoving(const bool IsMoving) {
}

void UHbkEm0451_AnimInstance::SetDamageAngle(const float NewDamageAngle) {
}

ECentaur_SpearState UHbkEm0451_AnimInstance::GetSpearState() const {
    return ECentaur_SpearState::Idle;
}

ECentaur_SpearAttackType UHbkEm0451_AnimInstance::GetSpearAttackType() const {
    return ECentaur_SpearAttackType::None;
}

bool UHbkEm0451_AnimInstance::GetOwnerIsMoving() const {
    return false;
}


