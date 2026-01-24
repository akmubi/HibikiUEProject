#include "HbkNp0000_St06_Clean.h"

AHbkNp0000_St06_Clean::AHbkNp0000_St06_Clean(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkData = NULL;
    this->TalkableInterval = 1.50f;
}

void AHbkNp0000_St06_Clean::ResumeInteract() {
}

void AHbkNp0000_St06_Clean::RecieveTalkSessionEnd(const FHbkTalkContext TalkContext) {
}

void AHbkNp0000_St06_Clean::PauseInteract() {
}

void AHbkNp0000_St06_Clean::OnPostTakeDamage_St06Clean(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkNp0000_St06_Clean::OnInteraction(AActor* Interactor) {
}





