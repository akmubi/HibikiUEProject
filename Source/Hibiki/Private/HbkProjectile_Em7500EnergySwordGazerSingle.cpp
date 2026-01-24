#include "HbkProjectile_Em7500EnergySwordGazerSingle.h"
#include "AkComponent.h"
#include "HbkPlaySeByBeatComponent.h"

AHbkProjectile_Em7500EnergySwordGazerSingle::AHbkProjectile_Em7500EnergySwordGazerSingle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoticeParticle = NULL;
    this->EnhancedNoticeParticle = NULL;
    this->PreAttackNoticeParticle = NULL;
    this->AttackParticle = NULL;
    this->EnhancedAttackParticle = NULL;
    this->AttackSound = NULL;
    this->EnhancedRate = 1.00f;
    this->EndMoveLifeSpan = 3.00f;
    this->SpawnNoteType = EHbkNote::Note_16th;
    this->SpawnNoteCount = 1.00f;
    this->FireSpawnTime = 0.00f;
    this->FireStateNo = 0;
    this->bIsUpdateSpawnFire = false;
    this->bIsWaitSpawnFire = false;
    this->bIsSpawnedFire = false;
    this->bIsUseSpawnFire = false;
    this->FireClass = NULL;
    this->FireGroupClass = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->SeByBeatComponent = CreateDefaultSubobject<UHbkPlaySeByBeatComponent>(TEXT("SeByBeatComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500EnergySwordGazerSingle::OnRecieveDisabled(bool DisableByDamage) {
}

void AHbkProjectile_Em7500EnergySwordGazerSingle::OnAbortProjectileEvent() {
}


