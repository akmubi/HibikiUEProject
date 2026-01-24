#include "HbkProjectile_Em7500EnergyWall.h"
#include "AkComponent.h"

AHbkProjectile_Em7500EnergyWall::AHbkProjectile_Em7500EnergyWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500EnergyWallProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->TangentValue = 0.00f;
    this->InitDistance = 0.00f;
    this->bIsAbort = false;
    this->bIsAbortProjectileEvent = false;
    this->bIsCheckOutOfTheField = true;
    this->CheckTraceChannel = TraceTypeQuery1;
    this->CheckTraceRadius = 50.00f;
    this->bIsOutOfTheField = false;
    this->bIsAttackAtNotice = false;
    this->NoticeParticle = NULL;
    this->AttackParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500EnergyWall::Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkProjectile_Em7500EnergyWall::OnAbortProjectileEvent() {
}


