#include "HbkProjectile_Em0662Bomb.h"
#include "Components/SceneComponent.h"
#include "HbkDamageComponent.h"
#include "HbkPartnerTargetPointComponent.h"

AHbkProjectile_Em0662Bomb::AHbkProjectile_Em0662Bomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->ExplosionNoteCount_Stay = 28.00f;
    this->ExplosionNoteCount_Activate = 3.00f;
    this->PreActivateNoteCount = 1.00f;
    this->ActivateDistance = 400.00f;
    this->PepActivateCount = 12;
    this->DamageComp = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("HbkDamage"));
    this->PartnerTargetPointComp_Pep = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint_Pep"));
    this->PartnerTargetPointComp_Macaron = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint_Macaron"));
    this->PartnerTargetPointComp_Korsica = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint_Korsica"));
    this->MacaronDamageMove_Height = 100.00f;
    this->MacaronDamageMove_Forward = 1000.00f;
    this->MacaronDamageMove_ForwardLimitOffset = 50.00f;
    this->MacaronDamageMoveCount = 1.00f;
    this->pActivateAreaEffect = NULL;
    this->pActivateWaitParticle = NULL;
    this->pPreActivateParticle = NULL;
    this->pExplosionParticle = NULL;
    this->EffectHeightOffset_ActivatePre = 2.00f;
    this->pSE_OnSet = NULL;
    this->pSE_OnExplosion = NULL;
    this->pSE_OnAlert = NULL;
    this->pSE_OnTimer = NULL;
    this->ActivateColorMaterial = NULL;
    this->DisplayMID = NULL;
    this->DisplayMoveSpeed = 5.00f;
    this->PartnerTargetPointComp_Pep->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp_Macaron->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp_Korsica->SetupAttachment(RootComponent);
    this->MeshRoot->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em0662Bomb::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}


