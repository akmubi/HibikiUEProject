#include "HbkEm6000_CommandBattleControl.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_CommandBattleControl::AHbkEm6000_CommandBattleControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Parameter = NULL;
    this->CommandBattleMode = EHbkEm6000CommandBattleMode::Phase3;
    this->CommandBattleResult = EHbkBossCommandBattleResult::None;
    this->CommandIndex = 0;
    this->CommandMax = 0;
    this->Process = EHbkEm6000CommandBattleProcess::None;
    this->ProcessNo = 0;
    this->bIsInputPartner = false;
    this->bIsInputPartnerSuccessed = false;
    this->bIsInputPartnerFail = false;
    this->AnimationProgress = 0;
    this->AnimationProgressMax = 4;
    this->AnimationProgressCount = 0;
    this->AnimationProgressCountMax = 2;
    this->InputPartnerSocket = TEXT("face");
    this->WaitTimeForSuccessPlayerReaction = 0.00f;
    this->WaitTimeForFailedPlayerReaction = 0.50f;
    this->WaitTimeForSuccessTornadoReaction = 0.00f;
    this->bIsInputCommand = false;
    this->IsSimpleRestart = false;
    this->bIsEnterAnimationCalled = false;
    this->bIsAttackAnimationCalled = false;
    this->bIsEnablePartnerIcon = false;
    this->BarWidgetClass = NULL;
    this->GaugeWidgetClass = NULL;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->RhythmSynchroSignal = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm6000_CommandBattleControl::TestProcessInit() {
}

void AHbkEm6000_CommandBattleControl::TestProcessEnd() {
}

void AHbkEm6000_CommandBattleControl::SetCommandBattleMode(EHbkEm6000CommandBattleMode InCommandBattleMode) {
}

void AHbkEm6000_CommandBattleControl::ResetCommandBattle() {
}

void AHbkEm6000_CommandBattleControl::OnSimpleRestart() {
}

void AHbkEm6000_CommandBattleControl::OnInputPartner() {
}

bool AHbkEm6000_CommandBattleControl::IsInputPartnerSuccessed() const {
    return false;
}

bool AHbkEm6000_CommandBattleControl::IsInputPartnerFail() const {
    return false;
}

bool AHbkEm6000_CommandBattleControl::IsInputPartner() const {
    return false;
}

EHbkEm6000CommandBattleProcess AHbkEm6000_CommandBattleControl::GetProcess() const {
    return EHbkEm6000CommandBattleProcess::None;
}

FHbkEm6000CommandBattleParameter AHbkEm6000_CommandBattleControl::GetParameter() const {
    return FHbkEm6000CommandBattleParameter{};
}

void AHbkEm6000_CommandBattleControl::EnablePlayerMode(EHbkEm6000CommandBattleMode InCommandBattleMode) {
}

void AHbkEm6000_CommandBattleControl::DisablePlayerMode() {
}

bool AHbkEm6000_CommandBattleControl::CommandBattleStart() {
    return false;
}



