#include "HbkNp0600_SecretBox.h"

AHbkNp0600_SecretBox::AHbkNp0600_SecretBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnItemClass = NULL;
    this->MiniGameNoteCount = 8;
    this->NeedPower = 0.68f;
    this->UpRate = 0.10f;
    this->ProtectInputTime = 0.17f;
    this->NotProtectedUpRate = 0.05f;
    this->DownRate = 0.10f;
    this->BeatHitNoteCount = 3;
    this->moveSpeed = 5.00f;
    this->PlayerInViewDist = 1000.00f;
    this->PlayerInViewDegree = 160.00f;
    this->ReturnHomePositionNoteCount = 12;
    this->MinigameWidgetClass = NULL;
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
}

void AHbkNp0600_SecretBox::OnStartCountDown() {
}

void AHbkNp0600_SecretBox::OnInteraction(AActor* Interactor) {
}

void AHbkNp0600_SecretBox::OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkNp0600_SecretBox::IsMoveBack() {
    return false;
}

float AHbkNp0600_SecretBox::GetLookAtLocationAlpha() {
    return 0.0f;
}

FVector AHbkNp0600_SecretBox::GetLookAtLocation() {
    return FVector{};
}

void AHbkNp0600_SecretBox::GetItem(FName InventoryTagName) {
}

bool AHbkNp0600_SecretBox::GetBeatHitSuccess() {
    return false;
}

float AHbkNp0600_SecretBox::GetAnimMoveRate() {
    return 0.0f;
}

void AHbkNp0600_SecretBox::ChangeGameMode_ButtonMashing() {
}


