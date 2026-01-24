#include "HbkProjectile_Em0661Wing.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkEnemyBurningComponent.h"
#include "HbkPartnerTargetPointComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkProjectile_Em0661Wing::AHbkProjectile_Em0661Wing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("MeshComp"));
    this->PartnerTargetPointComp_Korsica = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint_Korsica"));
    this->DamageType_Default = NULL;
    this->AttackRadius_Default = 150.00f;
    this->RotateRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RotateRoot"));
    this->StraightMoveSpeed = 7500.00f;
    this->DirInterpSpeed = 3.00f;
    this->BackOffsetDistForCollision = 150.00f;
    this->BezierCotrolBodyPoint_Dist = 1200.00f;
    this->BezierCotrolBodyPoint_Angle = 80.00f;
    this->HeightInterpSpeed = 10.00f;
    this->HeightOffset = 50.00f;
    this->AkCompMain = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompMain"));
    this->SE_OnLaunch = NULL;
    this->pSE_WingBlade = NULL;
    this->pSE_OnMove = NULL;
    this->pSE_OnReturnStartMove = NULL;
    this->SE_OnStop = NULL;
    this->pSE_OnReturn = NULL;
    this->SE_OnReadyCountPlay = NULL;
    this->SE_OnReadyInstFX_Phase1 = NULL;
    this->SE_OnReadyInstFX_Phase2 = NULL;
    this->SE_OnRollingLoopStop = NULL;
    this->pSE_OnChargeSingle = NULL;
    this->pSE_OnDamage = NULL;
    this->bSkipFirstReadyInstFX = false;
    this->pShootLineParticle = NULL;
    this->bIsShootLineEffectTypeByStep = false;
    this->ShootLineVFXLength = 3000.00f;
    this->VFXRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VFXRoot"));
    this->ShootLineVFXRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShootLineVFXRoot"));
    this->HbkEmBurningComp = CreateDefaultSubobject<UHbkEnemyBurningComponent>(TEXT("BurningComp"));
    this->DamageType_OnBurning = NULL;
    this->AttackRadius_OnBurning = 200.00f;
    this->BlowMontage = NULL;
    this->BlowOffsetHeight = 19.00f;
    this->VFXRoot->SetupAttachment(RootComponent);
    this->ShootLineVFXRoot->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp_Korsica->SetupAttachment(RootComponent);
    this->RotateRoot->SetupAttachment(RootComponent);
    this->AkCompMain->SetupAttachment(RootComponent);
    this->MeshComp->SetupAttachment(RotateRoot);
}

void AHbkProjectile_Em0661Wing::OnSyncNote16(int32 NoteCount, bool bOnBeat) {
}

void AHbkProjectile_Em0661Wing::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


