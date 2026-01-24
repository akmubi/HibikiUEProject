#include "HbkAm1000_Pigeon_SubMission.h"

AHbkAm1000_Pigeon_SubMission::AHbkAm1000_Pigeon_SubMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveType = 0;
}

void AHbkAm1000_Pigeon_SubMission::OnStartSubMission() {
}

void AHbkAm1000_Pigeon_SubMission::OnEndSubMission() {
}

void AHbkAm1000_Pigeon_SubMission::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkAm1000_Pigeon_SubMission::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


