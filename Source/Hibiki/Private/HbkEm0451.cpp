#include "HbkEm0451.h"
#include "Components/CapsuleComponent.h"
#include "HbkGrantBarrierComponent.h"
#include "HbkRepulsionComponent.h"

AHbkEm0451::AHbkEm0451(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReturnHealth = 100.00f;
    this->ThrowAnim = NULL;
    this->ThrowCoolTimeNoteType = EHbkNote::Note_Whole;
    this->ThrowCoolTimeNoteCount = 10;
    this->bIsReturnSpear = false;
    this->HbkRepulsion = CreateDefaultSubobject<UHbkRepulsionComponent>(TEXT("HbkRepulsion"));
    this->WpCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WpCapsule"));
    this->GrantBarrierComp = CreateDefaultSubobject<UHbkGrantBarrierComponent>(TEXT("GrantBarrierComp"));
    this->EquipSlotName = TEXT("Wp_Spear");
    this->DelayBarrierRhythm = EHbkNote::Note_Quarter;
    this->DelayBarrierNoteCount = 0;
    this->ReturnAddHeight = 100.00f;
    this->ThrowMoveXYCount = 2;
    this->ThrowMoveZCount = 2;
    this->ThrowTargetOffsetHeight = 50.00f;
    this->WpCapsule->SetupAttachment(HbkSkeletalMesh);
}

void AHbkEm0451::UpdateThrowMove(float DeltaT) {
}

void AHbkEm0451::UpdateReturnMove(float DeltaT) {
}

void AHbkEm0451::ThrowSpear() {
}

void AHbkEm0451::StartGrantBarrier() {
}

void AHbkEm0451::SetCentaur(AHbkEm0450_Centaur* Centaur) {
}

void AHbkEm0451::ReturnSpear() {
}

void AHbkEm0451::OnOverlapWpCollision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkEm0451::OnBeginAttackNotice() {
}

void AHbkEm0451::Notify_OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkEm0451::IsThrowingSpear() const {
    return false;
}

bool AHbkEm0451::GetWpAttached() const {
    return false;
}

UHbkEm0451_AnimInstance* AHbkEm0451::GetWpAnimInstance() const {
    return NULL;
}

bool AHbkEm0451::GetSpearTargetLocation(FVector& OutLocation) {
    return false;
}

bool AHbkEm0451::GetMovingXYDir() const {
    return false;
}

float AHbkEm0451::GetHealthSpear() const {
    return 0.0f;
}

bool AHbkEm0451::GetBarrierGranted() const {
    return false;
}

void AHbkEm0451::EndGrantBarrier() {
}

bool AHbkEm0451::DetachFromOwner() {
    return false;
}

bool AHbkEm0451::CanThrowSpear() const {
    return false;
}






bool AHbkEm0451::AttachToOwner() {
    return false;
}

void AHbkEm0451::AddRotateSpear(FRotator AddRot, FRotator FinRot, float InterpRate, float InterpStrength, float TotalDuration) {
}

void AHbkEm0451::AddDamageSpear(const float AddDamage) {
}


