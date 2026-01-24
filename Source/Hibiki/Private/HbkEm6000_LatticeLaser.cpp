#include "HbkEm6000_LatticeLaser.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_LatticeLaser::AHbkEm6000_LatticeLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkLatticeLaserProcess::None;
    this->ProcessNo = 0;
    this->bIsLatticeLaserModeRapidFire = false;
    this->GeneralPurposeValue = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->SubNoteTimeMax = 0.00f;
    this->SubNoteTime = 0.00f;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->NoteToMove = EHbkNote::Note_Quarter;
    this->NoteCountToMove = 1;
    this->NoteToSwitch = EHbkNote::Note_Quarter;
    this->NoteCountToSwitch = 1;
    this->NoteToSwitchAndMove = EHbkNote::Note_Quarter;
    this->NoteCountToSwitchAndMove = 1;
    this->NoteToDestroy = EHbkNote::Note_Quarter;
    this->NoteCountToDestroy = 1;
    this->RepeatCountToMove = 2;
    this->EasingFuncToMove = EEasingFunc::Linear;
    this->EaseBlendExpToMove = 2.00f;
    this->EaseStepToMove = 2;
    this->RepeatCountToSwitch = 8;
    this->NoteToSwitchLocation = EHbkNote::Note_8th;
    this->NoteCountToSwitchLocation = 1;
    this->EasingFuncToSwitch = EEasingFunc::Linear;
    this->EaseBlendExpToSwitch = 2.00f;
    this->EaseStepToSwitch = 2;
    this->RepeatCountToSwitchAndMove = 3;
    this->NoteToSwitchAndMoveSwitching = EHbkNote::Note_16th;
    this->NoteCountToSwitchAndMoveSwitching = 1;
    this->LatticeWidth = 4000.00f;
    this->LatticeHeight = 3000.00f;
    this->LatticeThickness = 30.00f;
    this->LatticeHorizontalNum = 6;
    this->LatticeVerticalNum = 4;
    this->LatticeHorizontalCavity = 4;
    this->CavityIndex = -1;
    this->CavityHistoryMax = 3;
    this->CavityListIndex = 0;
    this->LatticeLaserChangeCountForEnd = 0;
    this->LatticeLaserDamageType = NULL;
    this->TraceChannel = TraceTypeQuery1;
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->TestLatticeLaserType = EHbkLatticeLaserType::None;
    this->TestLatticeLaserIndex = 0;
    this->TestCavityCreateType = EHbkLatticeLaserCavityCreateType::Fake;
    this->TestCavityCreateCount = 0;
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm6000_LatticeLaser::TestProcessSwitchAndMove() {
}

void AHbkEm6000_LatticeLaser::TestProcessSwitch() {
}

void AHbkEm6000_LatticeLaser::TestProcessMove() {
}

void AHbkEm6000_LatticeLaser::TestProcessDestroy() {
}

void AHbkEm6000_LatticeLaser::TestPointToNewLaserLocation() {
}

void AHbkEm6000_LatticeLaser::TestLaserPosition() {
}

void AHbkEm6000_LatticeLaser::TestCreateCavityList() {
}

void AHbkEm6000_LatticeLaser::TestAssignNewLaserLocation() {
}

void AHbkEm6000_LatticeLaser::SetLatticeLaserModeRapidFire() {
}

void AHbkEm6000_LatticeLaser::SetLatticeLaserModeDefault() {
}

void AHbkEm6000_LatticeLaser::SetEndLocation(const FVector& Location) {
}

void AHbkEm6000_LatticeLaser::ReceivePlayerDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkEm6000_LatticeLaser::IsLatticeLaserModeRapidFire() const {
    return false;
}

void AHbkEm6000_LatticeLaser::InitializeLatticeLaser() {
}

void AHbkEm6000_LatticeLaser::FinalizeLatticeLaser() {
}


