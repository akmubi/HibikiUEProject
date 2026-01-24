#include "HbkSelfDestructionEnemyCharacter.h"

AHbkSelfDestructionEnemyCharacter::AHbkSelfDestructionEnemyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfDestructionAnim = NULL;
    this->SpeedRateDuringKorsica = 0.00f;
    this->ChangeRateNoteCount = 1;
    this->KnockBackDuringKorsica = 1000.00f;
    this->ChangeSpeedRateTime = 1.00f;
}

void AHbkSelfDestructionEnemyCharacter::OnBeginAttackNotice() {
}

void AHbkSelfDestructionEnemyCharacter::NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkSelfDestructionEnemyCharacter::isSelfDestruction() const {
    return false;
}

bool AHbkSelfDestructionEnemyCharacter::isCancelSelfDestruction() const {
    return false;
}



