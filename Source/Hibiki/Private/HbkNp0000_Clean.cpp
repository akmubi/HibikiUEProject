#include "HbkNp0000_Clean.h"

AHbkNp0000_Clean::AHbkNp0000_Clean(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallDeathTimer = 0.00f;
    this->FallDeathDist = 0.00f;
    this->BehavTime = 0.00f;
    this->CanFlee = false;
    this->FleeAngleTimer = 0.00f;
    this->FleeDistance = 0.00f;
    this->FleeMinTimer = 0.00f;
    this->St04SceneFlag = false;
    this->St06SceneFlag = false;
}

void AHbkNp0000_Clean::OnSignifiChanged(bool IsActive) {
}

void AHbkNp0000_Clean::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkNp0000_Clean::Np0000_Destroy() {
}


