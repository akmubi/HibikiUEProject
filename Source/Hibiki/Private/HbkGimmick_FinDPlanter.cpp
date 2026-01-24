#include "HbkGimmick_FinDPlanter.h"

AHbkGimmick_FinDPlanter::AHbkGimmick_FinDPlanter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->WaitIsPlaying = false;
    this->SoundIntervalTime = 0.20f;
    this->SoundVelocityThreshold = 0.50f;
    this->DitherStartTime = 1.00f;
}

void AHbkGimmick_FinDPlanter::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_FinDPlanter::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_FinDPlanter::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


