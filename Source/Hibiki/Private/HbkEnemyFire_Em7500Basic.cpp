#include "HbkEnemyFire_Em7500Basic.h"
#include "Components/SphereComponent.h"
#include "HbkDamageComponent.h"

AHbkEnemyFire_Em7500Basic::AHbkEnemyFire_Em7500Basic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->DamageComponent = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->SphereComponent->SetupAttachment(AttackComp);
}

void AHbkEnemyFire_Em7500Basic::OnAbortProjectileEvent() {
}


