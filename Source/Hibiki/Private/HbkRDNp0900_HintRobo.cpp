#include "HbkRDNp0900_HintRobo.h"

AHbkRDNp0900_HintRobo::AHbkRDNp0900_HintRobo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExitField = false;
    this->EscapeEnvQuery = NULL;
    this->HintRoboDamageReactionAnim = NULL;
    this->HintRoboExitAnim = NULL;
    this->ExitHealth = 1.00f;
    this->InvincibleTimer = 3.00f;
    this->DamageReqToEscape = 50.00f;
}

void AHbkRDNp0900_HintRobo::NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkRDNp0900_HintRobo::IsExitField() const {
    return false;
}

void AHbkRDNp0900_HintRobo::ExecuteEscapeEnvQuery() {
}

void AHbkRDNp0900_HintRobo::DisableInvinsible() {
}


