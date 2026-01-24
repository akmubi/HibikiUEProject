#include "HbkEnemyFireBase.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"

AHbkEnemyFireBase::AHbkEnemyFireBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->AttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("AttackComp"));
    this->ActivateWaitCount = 1;
    this->RemainingCount = 8;
    this->bAutoActivate = false;
    this->AttackActiveWaitNoteType = EHbkNote::Note_8th;
    this->AttackActiveWaitCount = 0;
    this->bAttackContinuousHit = false;
    this->PartnerTargetUsableDistance = 2000.00f;
    this->LifeSpanDeactivated = 3.00f;
    this->bDeactivateOnDamageToPlayer = true;
    this->bDestroyActiveVFX_OnDeactive = false;
    this->bDisableDestroyActiveVFX = false;
    this->SE_OnActivate = NULL;
    this->SE_OnDeactivate = NULL;
    this->bPlaySE = false;
    this->AttackComp->SetupAttachment(RootComponent);
}

void AHbkEnemyFireBase::OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType) {
}

void AHbkEnemyFireBase::Deactivate(bool bDeactiveByDamage) {
}

void AHbkEnemyFireBase::Activate() {
}


