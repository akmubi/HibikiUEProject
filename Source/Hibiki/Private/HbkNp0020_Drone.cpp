#include "HbkNp0020_Drone.h"

AHbkNp0020_Drone::AHbkNp0020_Drone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CarryClass = NULL;
    this->pDestroyVFX = NULL;
    this->pDestroySFX = NULL;
    this->pLoopSFX = NULL;
    this->pStopSFX = NULL;
    this->pLoopAk = NULL;
    this->SaveState = 0;
}

void AHbkNp0020_Drone::OnStartSubMission() {
}

void AHbkNp0020_Drone::OnPostStartPlay() {
}

void AHbkNp0020_Drone::OnEndSubMission() {
}

void AHbkNp0020_Drone::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkNp0020_Drone::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


