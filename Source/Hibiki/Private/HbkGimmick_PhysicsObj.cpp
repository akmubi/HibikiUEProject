#include "HbkGimmick_PhysicsObj.h"

AHbkGimmick_PhysicsObj::AHbkGimmick_PhysicsObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DitherStartTime = 1.00f;
    this->OverlapImpulseRate = 2500.00f;
    this->FirstMinImpulse = 0.00f;
    this->RadiusMovePhysics = 300.00f;
    this->MovePhysicsDither = false;
    this->bSavePhysicsGameFlag = false;
    this->FallingDestroyZ = 50000.00f;
    this->DefaultPhysicsON = false;
    this->WaitIsPlaying = false;
    this->SoundIntervalTime = 0.20f;
    this->SoundVelocityThreshold = 0.50f;
    this->TickVelocityThreshold = 0.50f;
}

void AHbkGimmick_PhysicsObj::SetMovePhysics(const FVector Impulse, const FVector ImpactPoint, const FName BoneName) {
}

void AHbkGimmick_PhysicsObj::SetHidden(bool Flag) {
}

void AHbkGimmick_PhysicsObj::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_PhysicsObj::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_PhysicsObj::OnComponentHitSound(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHbkGimmick_PhysicsObj::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHbkGimmick_PhysicsObj::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


