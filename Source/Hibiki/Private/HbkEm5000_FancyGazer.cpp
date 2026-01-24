#include "HbkEm5000_FancyGazer.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_FancyGazer::AHbkEm5000_FancyGazer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Process = EHbkEm5000FancyGazerProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->GenericNoteTime = 0.00f;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->BeginValueToWait = 0.00f;
    this->EndValueToWait = 300.00f;
    this->EasingFuncToWait = EEasingFunc::Step;
    this->EaseBlendExpToWait = 2.00f;
    this->EaseStepToWait = 2;
    this->NoteToWait = EHbkNote::Note_Quarter;
    this->NoteCountToWait = 1;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 1;
    this->NoteToEnd = EHbkNote::Note_Quarter;
    this->NoteCountToEnd = 1;
    this->AttackComp = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("AttackComp"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AttackComp->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}


