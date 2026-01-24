#include "HbkProjectile_Em7500Thunder.h"
#include "AkComponent.h"
#include "HbkPlaySeByBeatComponent.h"

AHbkProjectile_Em7500Thunder::AHbkProjectile_Em7500Thunder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500ThunderProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->NoteToNotice = EHbkNote::Note_Quarter;
    this->NoteCountToNotice = 2;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 2;
    this->NoteToEnd = EHbkNote::Note_Quarter;
    this->NoteCountToEnd = 2;
    this->NoticeParticle = NULL;
    this->AttackParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->SeByBeatComponent = CreateDefaultSubobject<UHbkPlaySeByBeatComponent>(TEXT("SeByBeatComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


