#include "HbkEm5000_RhythmParryControl.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_RhythmParryControl::AHbkEm5000_RhythmParryControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEm5000RhythmParryProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->BeforeEndMax = 0.00f;
    this->BeforeEnd = 0.00f;
    this->BeforePlayRate = 1.00f;
    this->GenericNoteTime = 0.00f;
    this->PlayRate = 1.00f;
    this->PlayTime = 0.00f;
    this->NextResult = EHbkEm5000RhythmParryNext::None;
    this->bIsRunning = false;
    this->bIsEndFinishCamera = false;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->RhythmParryResult = EHbkEm5000RhythmParryResult::None;
    this->ActionType = EHbkEm5000RhythmParryAction::None;
    this->AttackType = EHbkEm5000RhythmParryAttack::None;
    this->IsPlayFinishedReaction = false;
    this->IsDelayedSuccess = true;
    this->bIsKeepCurrentLocAndRot = true;
    this->BeforeEndNoteType = EHbkNote::Note_Quarter;
    this->BeforeEndNoteCount = 1.00f;
    this->BeforeEndNoteTypeForSecond = EHbkNote::Note_Quarter;
    this->BeforeEndNoteCountForSecond = 1.00f;
    this->FinishedNoteType = EHbkNote::Note_Quarter;
    this->FinishedNoteCount = 1.00f;
    this->bIsRequestSoundState = false;
    this->DelayedNoteType = EHbkNote::Note_Quarter;
    this->DelayedNoteMinTimeRate = 0.20f;
    this->IsPauseRhythmParry = false;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_RhythmParryControl::SetStageController(AHbkEm5000_StageController* Actor) {
}

void AHbkEm5000_RhythmParryControl::SetEndFinishCamera(bool Enable) {
}

void AHbkEm5000_RhythmParryControl::SetBossActor(AHbkEm5000_Mimosa* Actor) {
}

void AHbkEm5000_RhythmParryControl::PlayNotifyVFX() {
}

void AHbkEm5000_RhythmParryControl::PauseRhythmParry() {
}

void AHbkEm5000_RhythmParryControl::OnRepelledSuccessfull() {
}

void AHbkEm5000_RhythmParryControl::OnLocationAdjustedAction(AHbkEnemyCharacter* AttackerPawn, FVector TargetLocation, bool InbIsKeepCurrentLocAndRot) {
}

void AHbkEm5000_RhythmParryControl::OnEndDamage(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm5000_RhythmParryControl::OnEndAttackNotice(AHbkEnemyCharacter* Attacker, FBossRhythmAttackParam RhythmAttackParam) {
}

void AHbkEm5000_RhythmParryControl::OnEndAttack(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm5000_RhythmParryControl::OnEndAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

bool AHbkEm5000_RhythmParryControl::IsRunning() const {
    return false;
}

void AHbkEm5000_RhythmParryControl::InitializeRhythmParry() {
}

void AHbkEm5000_RhythmParryControl::FinalizeRhythmParry() {
}

void AHbkEm5000_RhythmParryControl::AbortRhythmParry() {
}


