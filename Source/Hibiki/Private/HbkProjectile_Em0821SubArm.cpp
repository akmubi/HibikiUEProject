#include "HbkProjectile_Em0821SubArm.h"
#include "HbkDamageComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkProjectile_Em0821SubArm::AHbkProjectile_Em0821SubArm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartnerTargetPointComp = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("HbkPartnerTargetPoint"));
    this->HbkDamageComp = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->ShotTraceType = TraceTypeQuery1;
    this->pMoveCurveAsset = NULL;
    this->SubarmScaleOnAttach = 1.00f;
    this->SubarmScaleOnSelfrunning = 1.00f;
    this->StingOffsetDist = 50.00f;
    this->CounterDamageType = NULL;
    this->pPreShootLineVFX = NULL;
    this->pJetVFX = NULL;
    this->pJetEscapeVFX = NULL;
    this->pCounterLineVFX = NULL;
    this->pLandingHitVFX = NULL;
    this->pSE_jetPlay = NULL;
    this->pSE_jetStop = NULL;
    this->pSE_charge = NULL;
    this->pSE_shot = NULL;
    this->pSE_sting = NULL;
    this->pSE_attach = NULL;
    this->ArmState = EHbkEm0821State::None;
    this->bIsAttachedOwnerMesh = false;
    this->PreEmittedCount = 0;
    this->PartnerTargetPointComp->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em0821SubArm::Receive_OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

void AHbkProjectile_Em0821SubArm::Receive_OnDecidedToTarget() {
}

bool AHbkProjectile_Em0821SubArm::IsAttachedToOwner() {
    return false;
}

FName AHbkProjectile_Em0821SubArm::GetAttachedSocketName() {
    return NAME_None;
}

EHbkEm0821State AHbkProjectile_Em0821SubArm::GetArmState() const {
    return EHbkEm0821State::None;
}







