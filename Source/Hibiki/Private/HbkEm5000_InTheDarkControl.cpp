#include "HbkEm5000_InTheDarkControl.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_InTheDarkControl::AHbkEm5000_InTheDarkControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkInTheDarkProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->BeforeEndMax = 0.00f;
    this->BeforeEnd = 0.00f;
    this->AppearNoteTime = 0.00f;
    this->ActionNoteTime = 0.00f;
    this->ActionLateNoteTime = 0.00f;
    this->SpotlightNoteTime = 0.00f;
    this->bIsPerformanceBegins = false;
    this->bIsNextInTheDark = false;
    this->bIsBossTakedDamage = false;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->bIsDamageNoReaction = false;
    this->NoteToOff = EHbkNote::Note_Quarter;
    this->NoteCountToOff = 8;
    this->NoteToLit = EHbkNote::Note_Quarter;
    this->NoteCountToLit = 8;
    this->NoteToTheatre = EHbkNote::Note_Quarter;
    this->NoteCountToTheatre = 8;
    this->NoteToSpotlight = EHbkNote::Note_Quarter;
    this->NoteCountToSpotlight = 1.00f;
    this->NoteCountToSpotlightBeforeEnd = 1.00f;
    this->NoteToChangeConeAngle = EHbkNote::Note_16th;
    this->NoteCountToChangeConeAngle = 1.00f;
    this->NoteToChangeLightColor = EHbkNote::Note_Quarter;
    this->NoteCountToChangeLightColor = 1.00f;
    this->NoteToAppear = EHbkNote::Note_Quarter;
    this->NoteCountToAppear = 2;
    this->NoteToAction = EHbkNote::Note_Quarter;
    this->NoteCountToAction = 4;
    this->NoteToActionLate = EHbkNote::Note_Quarter;
    this->NoteCountToActionLate = 2;
    this->SquareCountToSpotlight = 3.00f;
    this->TrackModeForAction = EHbkEm5000SpotlightTrackMode::Transform;
    this->TrackSocketName = TEXT("Origin");
    this->bIsSpawnForCS0825 = false;
    this->ProgramIndexForCS0825 = 0;
    this->ProgramIndex = 0;
    this->OffsetWaitingPosition = 290.00f;
    this->SupportingPerformerAcceptanceRadius = 30.00f;
    this->SupportingPerformerMoveSpeedRate = 1.00f;
    this->SpotlightTrackAlphaForMajor = 0.10f;
    this->SpotlightTrackAlphaForMinor = 0.20f;
    this->bCanJamCombo = false;
    this->ProtagonistSpotlightClass = NULL;
    this->SupportingSpotlightClass = NULL;
    this->AntagonistSpotlightClass = NULL;
    this->ChangeCameraBlendTime = 2.00f;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_InTheDarkControl::SpawnSaberForCS0825() {
}

void AHbkEm5000_InTheDarkControl::SetStageController(AHbkEm5000_StageController* Actor) {
}

void AHbkEm5000_InTheDarkControl::SetProgram(TArray<FHbkInTheDarkProgram>& Program) {
}

void AHbkEm5000_InTheDarkControl::SetPositioningInTheDark(AHbkEm5000_PositioningInTheDark* Actor) {
}

void AHbkEm5000_InTheDarkControl::SetEnemySpawner(AHbkEnemySpawner* Actor) {
}

void AHbkEm5000_InTheDarkControl::SetBossActor(AHbkEm5000_Mimosa* Actor) {
}

void AHbkEm5000_InTheDarkControl::ResetInTheDark() {
}

void AHbkEm5000_InTheDarkControl::PrepareInTheDark() {
}

void AHbkEm5000_InTheDarkControl::OnSpawnedEnemies(TArray<AHbkEnemyCharacter*> SpawnEnemies) {
}

bool AHbkEm5000_InTheDarkControl::IsPerformanceBegins() const {
    return false;
}

bool AHbkEm5000_InTheDarkControl::IsDamageNoReaction() const {
    return false;
}

bool AHbkEm5000_InTheDarkControl::IsBossTakesDamage() const {
    return false;
}

void AHbkEm5000_InTheDarkControl::InitializeInTheDark() {
}

EHbkInTheDarkProcess AHbkEm5000_InTheDarkControl::GetProcess() const {
    return EHbkInTheDarkProcess::None;
}

void AHbkEm5000_InTheDarkControl::FinalizeInTheDark() {
}

void AHbkEm5000_InTheDarkControl::DestroySaberForCS0825() {
}

bool AHbkEm5000_InTheDarkControl::CanJamCombo() const {
    return false;
}

void AHbkEm5000_InTheDarkControl::AbortInTheDark() {
}


