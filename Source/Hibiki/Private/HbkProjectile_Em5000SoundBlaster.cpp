#include "HbkProjectile_Em5000SoundBlaster.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"

AHbkProjectile_Em5000SoundBlaster::AHbkProjectile_Em5000SoundBlaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmitterSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmitterSceneComp"));
    this->HitEmitterSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HitEmitterSceneComp"));
    this->ReflectAttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("ReflectAttackComp"));
    this->ReturnDamageType = NULL;
    this->Process = EHbkEm5000SoundBlasterProcess::None;
    this->ProcessNo = 0;
    this->bIsRequestAbort = false;
    this->bIsUpdateAttach = false;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->NoteToSign = EHbkNote::Note_Quarter;
    this->NoteCountToSign = 1;
    this->NoteToIrradiate = EHbkNote::Note_Quarter;
    this->NoteCountToIrradiate = 1;
    this->InterpSpeedMax = 0.00f;
    this->InterpSpeed = 0.00f;
    this->NoteToInterpSpeed = EHbkNote::Note_Quarter;
    this->NoteCountToInterpSpeed = 0.00f;
    this->RangeToInterpSpeed = 0.00f;
    this->InterpSpeedTime = 0.00f;
    this->InterpSpeedRate = 2.00f;
    this->NoteToRefreshAttack = EHbkNote::None;
    this->NoteCountToRefreshAttack = 0.00f;
    this->RefreshAttackTime = 0.00f;
    this->NoteToReflectDelay = EHbkNote::None;
    this->NoteCountToReflectDelay = 1.00f;
    this->bIsContinueHitEffect = false;
    this->ContinueHitEffectTime = 0.00f;
    this->ContinueHitEffectTimeMax = 0.15f;
    this->bIsCanReflect = false;
    this->bIsBlocked = false;
    this->ReflectCount = 0;
    this->ReflectInitialAngleY = 120.00f;
    this->ReflectAttenuationAngleY = 20.00f;
    this->ReflectRangeAngleX = 90.00f;
    this->bIsAttackHit = false;
    this->bIsCalledHitEffectOnce = false;
    this->CallNoteRateHitEffect = 0.20f;
    this->EndPointTraceChannel = ECC_Visibility;
    this->SignParticle = NULL;
    this->IrradiateParticle = NULL;
    this->RepelParticle = NULL;
    this->ReturnParticle = NULL;
    this->HitParticle = NULL;
    this->ReturnHitParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->SubAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SubAKComp"));
    this->AkComponent->SetupAttachment(RootComponent);
    this->SubAkComponent->SetupAttachment(RootComponent);
    this->ReflectAttackComp->SetupAttachment(RootComponent);
}


