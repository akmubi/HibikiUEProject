#include "HbkNp0000_RD_Clean.h"

AHbkNp0000_RD_Clean::AHbkNp0000_RD_Clean(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EscapeAnim = NULL;
    this->moveSpeed = 0.00f;
    this->RotSpeed = 0.00f;
    this->GoalDist = 0.00f;
    this->AttackTime = 0.00f;
}

void AHbkNp0000_RD_Clean::OnPostTakeDamage_RDClean(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkNp0000_RD_Clean::Np0000_RD_Destroy() {
}


