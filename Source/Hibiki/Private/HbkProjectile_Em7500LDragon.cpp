#include "HbkProjectile_Em7500LDragon.h"
#include "AkComponent.h"

AHbkProjectile_Em7500LDragon::AHbkProjectile_Em7500LDragon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500LightningDragonProcess::None;
    this->ProcessNo = 0;
    this->bIsRequestAbort = false;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->NoteToNotice = EHbkNote::Note_Quarter;
    this->NoteCountToNotice = 1;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 1;
    this->NoteToEnd = EHbkNote::Note_Quarter;
    this->NoteCountToEnd = 4;
    this->NoticeParticle = NULL;
    this->AttackParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


