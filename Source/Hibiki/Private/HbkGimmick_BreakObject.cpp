#include "HbkGimmick_BreakObject.h"

AHbkGimmick_BreakObject::AHbkGimmick_BreakObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->StartDitherTime = 0.00f;
    this->DitherTimeToDisappear = 0.00f;
    this->bBroken = false;
}

void AHbkGimmick_BreakObject::OnOverlapCollisionMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_BreakObject::OnOverlapBreakMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_BreakObject::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& HitResult, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


