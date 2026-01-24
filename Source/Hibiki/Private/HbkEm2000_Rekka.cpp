#include "HbkEm2000_Rekka.h"
#include "HbkRekkaStepSuppressionComponent.h"

AHbkEm2000_Rekka::AHbkEm2000_Rekka(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActorPrevLocation.AddDefaulted(3);
    this->ChargeState = EHbkEm2000ChargeState::None;
    this->PipeEquipState = EHbkEm2000PipeEquipState::NoEquip;
    this->Parameter = NULL;
    this->Em2002Class = NULL;
    this->FistDownParticle = NULL;
    this->ActionVoiceDT = NULL;
    this->HintTalkDT = NULL;
    this->DamageReactionEffectiveTimeNote = EHbkNote::Note_Quarter;
    this->DamageReactionEffectiveTimeNoteCount = 24.00f;
    this->DamageStunStopSE = NULL;
    this->StepSuppressionComp = CreateDefaultSubobject<UHbkRekkaStepSuppressionComponent>(TEXT("StepSuppressionComp"));
}

void AHbkEm2000_Rekka::ThrowPipeInSpecifiedDirection(int32 Index, FName LaunchName) {
}

bool AHbkEm2000_Rekka::ThrowInSpecifiedDirectionQueue(FName LaunchName, EHbkNote NoteType, int32 NoteCount) {
    return false;
}

void AHbkEm2000_Rekka::TestPickSlideStagger() {
}

void AHbkEm2000_Rekka::StartDamageReactionEffectiveTimer() {
}

void AHbkEm2000_Rekka::SpecifyDirectionToThrowPipe(int32 Num) {
}

void AHbkEm2000_Rekka::SpawnParticleFistDown() {
}

bool AHbkEm2000_Rekka::SignInSpecifiedDirectionQueue() {
    return false;
}

void AHbkEm2000_Rekka::SignInSpecifiedDirection(int32 Index) {
}

void AHbkEm2000_Rekka::SetStaggerType(EHbkEm2000StaggerType Type) {
}

void AHbkEm2000_Rekka::SetSpecifyDirectionMode(EHbkEm2000SpecifyDirectionMode Mode) {
}

void AHbkEm2000_Rekka::SetPickSlideStagger() {
}

void AHbkEm2000_Rekka::SetGrabActorVisible(bool visible) {
}

void AHbkEm2000_Rekka::SetBrokenMeshVisible(bool visible) {
}

void AHbkEm2000_Rekka::SetBridgeBreakdownMode(EHbkEm2000BridgeBreakdownMode Mode) {
}

void AHbkEm2000_Rekka::SetActiveStageMagnet(bool Active) {
}

void AHbkEm2000_Rekka::ProjectileSynchronizeAnimation(FName SlotName, AHbkProjectile* Projectile) {
}

void AHbkEm2000_Rekka::PlayHintTalk(EHbkEm2000HintTalkType Type) {
}

void AHbkEm2000_Rekka::PlayActionVoice(EHbkEm2000ActionVoiceType Type, bool IsForceStopPrevious) {
}

void AHbkEm2000_Rekka::OnStateChangeEvent(int32 StateIndex) {
}

void AHbkEm2000_Rekka::OnloadCompleted() {
}

void AHbkEm2000_Rekka::OnEndDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm2000_Rekka::OnComboCountUp(int32 ComboCount, bool bScoreBonus) {
}

void AHbkEm2000_Rekka::OnComboCountClear() {
}

void AHbkEm2000_Rekka::OnAbortDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

bool AHbkEm2000_Rekka::IsDamageStagger() const {
    return false;
}

EHbkEm2000StaggerType AHbkEm2000_Rekka::GetStaggerType() const {
    return EHbkEm2000StaggerType::None;
}

EHbkEm2000SpecifyDirectionMode AHbkEm2000_Rekka::GetSpecifyDirectionMode() const {
    return EHbkEm2000SpecifyDirectionMode::Evenly;
}

float AHbkEm2000_Rekka::GetPipeSlalomLoopTime() {
    return 0.0f;
}

EHbkEm2000PipeEquipState AHbkEm2000_Rekka::GetPipeEquipState() const {
    return EHbkEm2000PipeEquipState::NoEquip;
}

AHbkEm2000_PipeEquipPoint* AHbkEm2000_Rekka::GetPipeEquipPoint() const {
    return NULL;
}

FHbkEm2000PhaseParameter AHbkEm2000_Rekka::GetPhaseParameter(int32 StateIndex) const {
    return FHbkEm2000PhaseParameter{};
}

UHbkAnimInstance* AHbkEm2000_Rekka::GetGrabActorAnimInstance() const {
    return NULL;
}

EHbkEm2000ChargeState AHbkEm2000_Rekka::GetChargeState() const {
    return EHbkEm2000ChargeState::None;
}

AHbkEm2000_ChargePoint* AHbkEm2000_Rekka::GetChargePoint() const {
    return NULL;
}

EHbkEm2000BridgeBreakdownMode AHbkEm2000_Rekka::GetBridgeBreakdownMode() const {
    return EHbkEm2000BridgeBreakdownMode::None;
}

AHbkEm2000_BreakDownStandPoint* AHbkEm2000_Rekka::GetBreakdownStandPoint(int32 PointNo) {
    return NULL;
}

void AHbkEm2000_Rekka::EnqueueSpecifyDirection() {
}

void AHbkEm2000_Rekka::DequeueSpecifyDirection() {
}

void AHbkEm2000_Rekka::DeactiveChangeMonitor() {
}

void AHbkEm2000_Rekka::ClearSpecifyDirectionCountList() {
}

void AHbkEm2000_Rekka::ClearSpecifiedDirectionQueue() {
}

void AHbkEm2000_Rekka::ChangePipeEquipState_OneHandEquip() {
}

void AHbkEm2000_Rekka::ChangePipeEquipState_NoEquip() {
}

void AHbkEm2000_Rekka::ChangePipeEquipState_BothHandEquip() {
}

void AHbkEm2000_Rekka::ChangePipeEquipState(EHbkEm2000PipeEquipState State) {
}

void AHbkEm2000_Rekka::ChangePipeEquipPoint_Obtained() {
}

void AHbkEm2000_Rekka::ChangeChargeState_None() {
}

void AHbkEm2000_Rekka::ChangeChargeState_Charged() {
}

void AHbkEm2000_Rekka::ChangeChargeState(EHbkEm2000ChargeState State) {
}

void AHbkEm2000_Rekka::AttackInSpecifiedDirection(int32 Index, EHbkNote NoteType, int32 NoteCount) {
}

void AHbkEm2000_Rekka::ActiveStageMagnet_On() {
}

void AHbkEm2000_Rekka::ActiveStageMagnet_Off() {
}

void AHbkEm2000_Rekka::ActivateDrive() {
}

void AHbkEm2000_Rekka::ActivateDischarge() {
}


