#include "HbkGimmick_SplineMove.h"

AHbkGimmick_SplineMove::AHbkGimmick_SplineMove(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Type = SPLINEMOVE_TYPE_COMMON;
    this->waitActivate = false;
    this->waitDeactivate = false;
    this->defaultChange = false;
    this->RandomRotator = false;
}

void AHbkGimmick_SplineMove::OnMoveEnd() {
}

void AHbkGimmick_SplineMove::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkGimmick_SplineMove::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkGimmick_SplineMove::OnBeatEvent_SplineMove(const int32 Count) {
}

void AHbkGimmick_SplineMove::OnBarEvent_SplineMove(const int32 Count) {
}




