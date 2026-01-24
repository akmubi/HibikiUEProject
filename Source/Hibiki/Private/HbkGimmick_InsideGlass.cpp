#include "HbkGimmick_InsideGlass.h"

AHbkGimmick_InsideGlass::AHbkGimmick_InsideGlass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AnyDamageWillDestroy = false;
    this->BreakPower = 0.00f;
    this->bBreak = false;
    this->pBreakSKMesh = NULL;
    this->pBrokenFrameMesh = NULL;
    this->pDefaultMesh = NULL;
    this->pGlassCollision = NULL;
}

void AHbkGimmick_InsideGlass::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_InsideGlass::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


