#include "HbkNp0600_RD_SecretBox.h"

AHbkNp0600_RD_SecretBox::AHbkNp0600_RD_SecretBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerInViewDist = 1000.00f;
    this->PlayerInViewDegree = 160.00f;
    this->ReturnHomePositionNoteCount = 12;
    this->OpenedActorClass = NULL;
    this->DamageSeRef = NULL;
    this->ButtonMashingLineUpSeRef = NULL;
    this->ButtonMashingLineDownSeRef = NULL;
    this->ButtonMashingSuccessSeRef = NULL;
    this->BeatHitSuccessSeRef = NULL;
    this->PlayMoveRollerSeRef = NULL;
    this->StopMoveRollerSeRef = NULL;
    this->DamageVfxRef = NULL;
    this->ButtonMashingSuccessVfxRef = NULL;
    this->BeatHitSuccessVfxRef = NULL;
    this->ActiveDistance = 100.00f;
}

void AHbkNp0600_RD_SecretBox::SetRDShopInteractedFlag(bool State) {
}

void AHbkNp0600_RD_SecretBox::SetRDChallengeFinishFlag(bool State) {
}

void AHbkNp0600_RD_SecretBox::OnInteraction(AActor* Interactor) {
}

void AHbkNp0600_RD_SecretBox::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkNp0600_RD_SecretBox::GetRDChallengeFinishFlag() {
    return false;
}

bool AHbkNp0600_RD_SecretBox::GeRDShopInteractedFlag() {
    return false;
}


