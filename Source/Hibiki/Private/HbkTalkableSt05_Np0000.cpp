#include "HbkTalkableSt05_Np0000.h"

AHbkTalkableSt05_Np0000::AHbkTalkableSt05_Np0000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SaveState = 0;
}

void AHbkTalkableSt05_Np0000::St05Np0000_Destroy() {
}

void AHbkTalkableSt05_Np0000::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


