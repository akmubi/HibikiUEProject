#include "HbkProjectile_Em7500HelmDivideSlash.h"
#include "AkComponent.h"

AHbkProjectile_Em7500HelmDivideSlash::AHbkProjectile_Em7500HelmDivideSlash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500HelmDivideSlashProcess::None;
    this->ProcessNo = 0;
    this->bIsRequestAbort = false;
    this->bIsUpdateAttach = false;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->NoteToNotice = EHbkNote::Note_Quarter;
    this->NoteCountToNotice = 5;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 1;
    this->NoteToEnd = EHbkNote::Note_Quarter;
    this->NoteCountToEnd = 4;
    this->AttachSocketName = TEXT("Origin");
    this->NoticeLifeParamName = TEXT("laserCountdown");
    this->NoticeParticle = NULL;
    this->AttackParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


