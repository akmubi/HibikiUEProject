#include "HbkProjectile_Em7500GroundSlashAlpha.h"
#include "AkComponent.h"

AHbkProjectile_Em7500GroundSlashAlpha::AHbkProjectile_Em7500GroundSlashAlpha(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500GroundSlashAlphaProcess::None;
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
    this->bIsUseFire = false;
    this->FireCheckTraceChannel = TraceTypeQuery1;
    this->FireGroupClass = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


