#include "HbkEm7500_CommandBattleControl.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm7500_CommandBattleControl::AHbkEm7500_CommandBattleControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Parameter = NULL;
    this->CommandBattleMode = EHbkEm7500CommandBattleMode::Macaron;
    this->CommandBattleResult = EHbkBossCommandBattleResult::None;
    this->CommandIndex = 0;
    this->CommandMax = 0;
    this->Process = EHbkEm7500CommandBattleProcess::None;
    this->ProcessNo = 0;
    this->bIsInputCommand = false;
    this->BarWidgetClass = NULL;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->RhythmSynchroSignal = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm7500_CommandBattleControl::TestProcessPeppermint() {
}

void AHbkEm7500_CommandBattleControl::TestProcessMacaron() {
}

void AHbkEm7500_CommandBattleControl::TestProcessKorsica() {
}

void AHbkEm7500_CommandBattleControl::TestProcessChaiAnd808() {
}

void AHbkEm7500_CommandBattleControl::SetCommandBattleMode(EHbkEm7500CommandBattleMode InCommandBattleMode) {
}

void AHbkEm7500_CommandBattleControl::ResetCommandBattle() {
}

bool AHbkEm7500_CommandBattleControl::IsCommandBattleSuccessful(EHbkEm7500CommandBattleMode InCommandBattleMode) {
    return false;
}

EHbkEm7500CommandBattleProcess AHbkEm7500_CommandBattleControl::GetProcess() const {
    return EHbkEm7500CommandBattleProcess::None;
}

FHbkEm7500CommandBattleParameter AHbkEm7500_CommandBattleControl::GetParameter() const {
    return FHbkEm7500CommandBattleParameter{};
}

bool AHbkEm7500_CommandBattleControl::CommandBattleStart() {
    return false;
}



