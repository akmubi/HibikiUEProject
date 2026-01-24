#include "HbkEm5000_SideStoryControl.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_SideStoryControl::AHbkEm5000_SideStoryControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkSideStoryProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->GenericNoteTime = 0.00f;
    this->bIsTriggerHit = false;
    this->bIsRunning = false;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->WaitBarHeadMinTimeRate = 0.80f;
    this->EncoreCount = 0;
    this->EncoreCountMax = 2;
    this->GroundFlameCountMax = 3;
    this->GroundFlameOuterFrames = 2;
    this->GroundFlameSquareCount = 2;
    this->GroundFlameRange = 125.00f;
    this->GroundFlameRangeCornerRate = 1.60f;
    this->NumberOfMarches = 5;
    this->MarchCount = 0;
    this->NoteToEntry = EHbkNote::Note_Quarter;
    this->NoteCountToEntry = 4;
    this->NoteToMarch = EHbkNote::Note_Quarter;
    this->NoteCountToMarch = 2;
    this->NoteToMarchGroundFlame = EHbkNote::Note_Quarter;
    this->NoteCountToMarchGroundFlame = 1;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 4;
    this->NoteToExit = EHbkNote::Note_Quarter;
    this->NoteCountToExit = 4;
    this->NoteToEncore = EHbkNote::Note_Quarter;
    this->NoteCountToEncore = 12;
    this->bIsEnableAutoEncore = false;
    this->bIsRequestAutoEncore = false;
    this->AcceptanceRadius = 20.00f;
    this->ChangeCameraBlendTime = 2.00f;
    this->AppendDuration = 2.00f;
    this->AppendPriority = 1;
    this->BossControlStatus = EHbkSideStoryBossControl::None;
    this->FancyGazerClass = NULL;
    this->GroundFlameClass = NULL;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
}

void AHbkEm5000_SideStoryControl::TestRequestGroundFlame() {
}

void AHbkEm5000_SideStoryControl::SetTriggerHit(bool NewIsTriggerHit) {
}

void AHbkEm5000_SideStoryControl::SetStageController(AHbkEm5000_StageController* Actor) {
}

void AHbkEm5000_SideStoryControl::SetSideStoryLocationActor(AActor* Actor) {
}

void AHbkEm5000_SideStoryControl::SetPositioningInTheDark(AHbkEm5000_PositioningInTheDark* Actor) {
}

void AHbkEm5000_SideStoryControl::SetEnemySpawner(AHbkEnemySpawner* Actor) {
}

void AHbkEm5000_SideStoryControl::SetBossControlStatus(EHbkSideStoryBossControl Status) {
}

void AHbkEm5000_SideStoryControl::SetBossActor(AHbkEm5000_Mimosa* Actor) {
}

void AHbkEm5000_SideStoryControl::Receive_OnEndDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm5000_SideStoryControl::Receive_OnBeginDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI) {
}

void AHbkEm5000_SideStoryControl::OnSpawnedEnemies(TArray<AHbkEnemyCharacter*> SpawnEnemies) {
}

bool AHbkEm5000_SideStoryControl::IsTriggerHit() const {
    return false;
}

bool AHbkEm5000_SideStoryControl::IsPerformanceBegins() const {
    return false;
}

bool AHbkEm5000_SideStoryControl::IsEncore() const {
    return false;
}

void AHbkEm5000_SideStoryControl::InitializeSideStory(bool bIsFirst) {
}

EHbkSideStoryProcess AHbkEm5000_SideStoryControl::GetProcess() const {
    return EHbkSideStoryProcess::None;
}

FVector AHbkEm5000_SideStoryControl::GetCenterLocation() {
    return FVector{};
}

EHbkSideStoryBossControl AHbkEm5000_SideStoryControl::GetBossControlStatus() const {
    return EHbkSideStoryBossControl::None;
}

void AHbkEm5000_SideStoryControl::FinalizeSideStory() {
}

void AHbkEm5000_SideStoryControl::AbortSideStory() {
}


