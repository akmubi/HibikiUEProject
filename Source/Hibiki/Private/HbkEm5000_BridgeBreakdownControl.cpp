#include "HbkEm5000_BridgeBreakdownControl.h"
#include "AkComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm5000_BridgeBreakdownControl::AHbkEm5000_BridgeBreakdownControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Parameter = NULL;
    this->NowPopularity = 0.00f;
    this->AdditionPopularity = 0.00f;
    this->SubtractionPopularity = 0.00f;
    this->PopularitySuperiorRate = 0.00f;
    this->PopularityInferiorRate = 0.00f;
    this->CommandIndex = 0;
    this->InputCommandIndex = 0;
    this->CommandMax = 0;
    this->Process = EHbkEm5000BridgeBreakdownProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->ShrinkedTime = 0.00f;
    this->PreNoteTimeMax = 0.00f;
    this->PreNoteTime = 0.00f;
    this->PreAddNoteTime = 0.00f;
    this->PreShrinkedTime = 0.00f;
    this->bIsPreSetupCommand = false;
    this->InputCommandNoteTimeMax = 0.00f;
    this->InputCommandNoteTime = 0.00f;
    this->InputCommandAddNoteTime = 0.00f;
    this->InputCommandShrinkedTime = 0.00f;
    this->bIsInputCommand = false;
    this->DanceAction = EHbkEm5000BridgeBreakdownAction::None;
    this->ActionIndex = 0;
    this->IsSimpleRestart = false;
    this->SpawnGroupName = TEXT("BridgeBreakdown");
    this->InputCommandSuccessRate = 0.00f;
    this->NextPhaseIndex = 6;
    this->AkIndex = 0;
    this->RTPC_Cheers = NULL;
    this->RTPCString_Cheers = TEXT("GP_SP_st08_Mimosa_Bridge_Cheers_01");
    this->BridgeWidgetClass = NULL;
    this->GaugeWidgetClass = NULL;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->RhythmSynchroSignal = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->SubAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SubAKComp"));
}

void AHbkEm5000_BridgeBreakdownControl::TestProcessEnd() {
}

void AHbkEm5000_BridgeBreakdownControl::TestProcessBegin() {
}

void AHbkEm5000_BridgeBreakdownControl::SpawnEnemy() {
}

void AHbkEm5000_BridgeBreakdownControl::OnSpawnedEnemies(TArray<AHbkEnemyCharacter*> SpawnEnemies) {
}

void AHbkEm5000_BridgeBreakdownControl::OnSimpleRestart() {
}

void AHbkEm5000_BridgeBreakdownControl::OnEndSt08Ev5000_81Event(bool IsSkipped) {
}

void AHbkEm5000_BridgeBreakdownControl::OnEndAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

bool AHbkEm5000_BridgeBreakdownControl::IsGameOver() const {
    return false;
}

EHbkEm5000BridgeBreakdownProcess AHbkEm5000_BridgeBreakdownControl::GetProcess() const {
    return EHbkEm5000BridgeBreakdownProcess::None;
}

FHbkEm5000BridgeParameter AHbkEm5000_BridgeBreakdownControl::GetParameter() const {
    return FHbkEm5000BridgeParameter{};
}

float AHbkEm5000_BridgeBreakdownControl::GetElapsedTime() {
    return 0.0f;
}

TArray<FHbkBossCommandBattleCommand> AHbkEm5000_BridgeBreakdownControl::GetBattleCommand() const {
    return TArray<FHbkBossCommandBattleCommand>();
}

void AHbkEm5000_BridgeBreakdownControl::DestroyEnemy() {
}

void AHbkEm5000_BridgeBreakdownControl::ChangePlayerMode(bool Enable) {
}

void AHbkEm5000_BridgeBreakdownControl::ChangeMimosaMode(bool Enable) {
}

void AHbkEm5000_BridgeBreakdownControl::ChangeEndProcess() {
}

void AHbkEm5000_BridgeBreakdownControl::ChangeCamera(EHbkEm5000BridgeBreakdownCamera Type, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void AHbkEm5000_BridgeBreakdownControl::ChangeBeginProcess() {
}


void AHbkEm5000_BridgeBreakdownControl::AdjustLocation() {
}


