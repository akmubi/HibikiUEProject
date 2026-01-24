#include "HbkEnemyWeapon.h"
#include "HbkDamageComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEnemyWeapon::AHbkEnemyWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkDamage = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->HbkSkeletalMesh = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("HbkSkeletalMesh"));
    this->HbkSkeletalMesh->SetupAttachment(RootComponent);
}

void AHbkEnemyWeapon::SetMaxHealth(float NewValue) {
}

void AHbkEnemyWeapon::SetCurrentHealth(float NewValue) {
}

void AHbkEnemyWeapon::ResetHealth() {
}

void AHbkEnemyWeapon::OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkEnemyWeapon::OnHealthBecomedZero() {
}

bool AHbkEnemyWeapon::IsDurableZero() const {
    return false;
}

bool AHbkEnemyWeapon::IsBreak() const {
    return false;
}

UHbkSkeletalMeshComponent* AHbkEnemyWeapon::GetSkeletalMesh() {
    return NULL;
}

float AHbkEnemyWeapon::GetMaxHealth() const {
    return 0.0f;
}

float AHbkEnemyWeapon::GetHealthRate() const {
    return 0.0f;
}

float AHbkEnemyWeapon::GetHealth() const {
    return 0.0f;
}

UHbkDamageComponent* AHbkEnemyWeapon::GetDamageComponent() const {
    return NULL;
}

void AHbkEnemyWeapon::ForceBreak() {
}


