#include "HbkEm0450_Centaur.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "HbkEquipComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm0450_Centaur::AHbkEm0450_Centaur(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WpAttachSocketComp = CreateDefaultSubobject<USceneComponent>(TEXT("WpAttachSocket"));
    this->HandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("WpAttachCollision"));
    this->EquipComp = CreateDefaultSubobject<UHbkEquipComponent>(TEXT("EquipComp"));
    this->WpSlotName = TEXT("Wp_Spear");
    this->CheckAngle = 30.00f;
    this->WpAttachSocketComp->SetupAttachment(GetMesh());
    this->HandCollision->SetupAttachment(WpAttachSocketComp);
}

void AHbkEm0450_Centaur::UpdateAvoidPAEvasion(int32 NoteCount, bool downBeat) {
}

void AHbkEm0450_Centaur::StartSpinAttack(float TotalDuration) {
}

void AHbkEm0450_Centaur::SetAvoidPepAttack(bool bAvoid, EHbkNote NoteType, int32 NoteCount) {
}

void AHbkEm0450_Centaur::PerformAvoidPlayerAttack(int32 NoteCount, bool downBeat) {
}

void AHbkEm0450_Centaur::PepperAvoidAction() {
}

void AHbkEm0450_Centaur::OnPlayerStartAttackState() {
}

void AHbkEm0450_Centaur::OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType) {
}

void AHbkEm0450_Centaur::NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

FName AHbkEm0450_Centaur::GetWpSlotName() const {
    return NAME_None;
}

USceneComponent* AHbkEm0450_Centaur::GetWpAttachSocket() const {
    return NULL;
}

AHbkEm0451* AHbkEm0450_Centaur::GetSpear() const {
    return NULL;
}

void AHbkEm0450_Centaur::EndSpinAttack() {
}

bool AHbkEm0450_Centaur::CheckSpecifyDir(const FVector CheckDir, float CheckLength, bool bDebugDraw) const {
    return false;
}





