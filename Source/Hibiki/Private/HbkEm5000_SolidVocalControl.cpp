#include "HbkEm5000_SolidVocalControl.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm5000_SolidVocalControl::AHbkEm5000_SolidVocalControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlPointDistance = 0.00f;
    this->CorrectionDivisionNumber = 4;
    this->AssaultType = EHbkSolidVocalAssaultType::OnceEveryOtherBeat;
    this->bIsStartUpEnable = false;
    this->NoteToReachStartUp = EHbkNote::Note_Quarter;
    this->NoteCountToReachStartUp = 4;
    this->StartUpElapsedTime = 0.00f;
    this->StartUpTime = 0.00f;
    this->bIsRotatingEnable = false;
    this->RotateElapsedTime = 0.00f;
    this->NoteToReachRotate = EHbkNote::Note_Quarter;
    this->NoteCountToReachRotate = 1.00f;
    this->RotateAlpha = 0.00f;
    this->bIsPursuingEnable = false;
    this->BeginPursueSpeed = 0.00f;
    this->EndPursueSpeed = 30.00f;
    this->NowPursueSpeed = 0.00f;
    this->PursueElapsedTime = 0.00f;
    this->NoteToReachPursue = EHbkNote::Note_Quarter;
    this->NoteCountToReachPursue = 1.00f;
    this->PursueAlpha = 0.00f;
    this->NoteToReachAssault = EHbkNote::Note_Quarter;
    this->NoteCountToReachAssault = 1.00f;
    this->AssaultElapsedTime = 0.00f;
    this->SurroundDistance = 0.00f;
    this->Health = 0.00f;
    this->IsExplode = false;
    this->IsFinishedTask = false;
    this->ControlTask = NULL;
    this->TraceType = TraceTypeQuery1;
    this->TraceRadius = 60.00f;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->RhythmSynchroSignal = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->TestControlPointNum = 5;
    this->TestControlPointDistance = 250.00f;
}

void AHbkEm5000_SolidVocalControl::TestSetupControlPoint() {
}

void AHbkEm5000_SolidVocalControl::TestRotating() {
}

void AHbkEm5000_SolidVocalControl::TestPursuing() {
}

void AHbkEm5000_SolidVocalControl::TestAssault() {
}

void AHbkEm5000_SolidVocalControl::SetupControlPoint(int32 Num, float Distance) {
}

void AHbkEm5000_SolidVocalControl::SetStartUpNoteType(EHbkNote Type) {
}

void AHbkEm5000_SolidVocalControl::SetStartUpNoteCount(int32 Count) {
}

void AHbkEm5000_SolidVocalControl::SetStartUpEnable(bool Enable) {
}

void AHbkEm5000_SolidVocalControl::SetSolidVocalSurroundDistance(float InSurroundDistance) {
}

bool AHbkEm5000_SolidVocalControl::SetSolidVocalParam(int32 Index, const FHbkEm5000SolidVocalParam& Param) {
    return false;
}

void AHbkEm5000_SolidVocalControl::SetSolidVocalHealth(float InHealth) {
}

void AHbkEm5000_SolidVocalControl::SetSolidVocalExplode(bool InIsExplode) {
}

void AHbkEm5000_SolidVocalControl::SetRotatingEnable(bool Enable) {
}

void AHbkEm5000_SolidVocalControl::SetPursuingEnable(bool Enable) {
}

void AHbkEm5000_SolidVocalControl::SetOwnerBoss(AHbkEm5000_Mimosa* InOwnerBoss) {
}

void AHbkEm5000_SolidVocalControl::SetEndRotateSpeed(FQuat Quat) {
}

void AHbkEm5000_SolidVocalControl::SetEndPursueSpeed(float fSpeed) {
}

void AHbkEm5000_SolidVocalControl::SetAssaultType(EHbkSolidVocalAssaultType Type) {
}

void AHbkEm5000_SolidVocalControl::SetAssaultEnable(bool Enable) {
}

bool AHbkEm5000_SolidVocalControl::RegistSolidVocalProjectile(AHbkProjectile_SolidVocal* Projectile) {
    return false;
}

bool AHbkEm5000_SolidVocalControl::IsAllIgnited() {
    return false;
}

UHbkRhythmSynchroSignalComponent* AHbkEm5000_SolidVocalControl::GetRhythmSynchroSignal() {
    return NULL;
}

UHbkRhythmSynchroComponent* AHbkEm5000_SolidVocalControl::GetRhythmSynchro() {
    return NULL;
}

int32 AHbkEm5000_SolidVocalControl::GetControlPointNum() {
    return 0;
}

void AHbkEm5000_SolidVocalControl::ControlPointLyricsTypeRandom(const TArray<EHbkSolidVocalLyricsType>& CandidateList) {
}

void AHbkEm5000_SolidVocalControl::ControlPointLyricsTypePattern(const TArray<EHbkSolidVocalLyricsType>& PatternList) {
}

void AHbkEm5000_SolidVocalControl::CallOnYourMark() {
}

bool AHbkEm5000_SolidVocalControl::CallIgnition(int32 Index) {
    return false;
}

void AHbkEm5000_SolidVocalControl::CallAppearance() {
}

void AHbkEm5000_SolidVocalControl::AbortSolidVocalControl() {
}


