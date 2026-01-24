#include "HbkNp0030_Drone.h"

AHbkNp0030_Drone::AHbkNp0030_Drone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->TargetPlayer = false;
    this->bSaveType = EHbkNp0030_Drone_SaveType::NP0030_SAVE_NONE;
    this->pHitVFX = NULL;
    this->pLoopSFX = NULL;
    this->pStopSFX = NULL;
    this->pLoopAk = NULL;
}

void AHbkNp0030_Drone::SplineMoveStart() {
}

void AHbkNp0030_Drone::SplineMoveEnd() {
}

void AHbkNp0030_Drone::SetCollision(bool Flag) {
}

void AHbkNp0030_Drone::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkNp0030_Drone::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkNp0030_Drone::Np0030_Destroy() {
}

void AHbkNp0030_Drone::MovieStartFunc(UTexture* NewMediaTexture) {
}

void AHbkNp0030_Drone::MovieEndFunc() {
}

void AHbkNp0030_Drone::MovieCloseFunc() {
}

FVector AHbkNp0030_Drone::GetMoveDir() {
    return FVector{};
}


