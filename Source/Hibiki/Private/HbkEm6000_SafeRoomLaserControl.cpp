#include "HbkEm6000_SafeRoomLaserControl.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_SafeRoomLaserControl::AHbkEm6000_SafeRoomLaserControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkSafeRoomLaserProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->bIsLaserEnable = false;
    this->PointIndex = 0;
    this->FloatingLaserNum = 3;
    this->FloatingLaserAttackIndex = 0;
    this->bIsLatticeLaserNoMove = false;
    this->bIsFloatingLaserNoAttack = false;
    this->bIsLatticeLaserSpawnModeRapidFire = false;
    this->LatticeLaserClass = NULL;
    this->FloatingLaserClass = NULL;
    this->SceneComponent_PointABegin = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointABegin"));
    this->SceneComponent_PointAEnd = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointAEnd"));
    this->SceneComponent_PointBBegin = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointBBegin"));
    this->SceneComponent_PointBEnd = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointBEnd"));
    this->SceneComponent_PointA00 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointA00"));
    this->SceneComponent_PointA01 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointA01"));
    this->SceneComponent_PointA02 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointA02"));
    this->SceneComponent_PointB00 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointB00"));
    this->SceneComponent_PointB01 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointB01"));
    this->SceneComponent_PointB02 = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent_PointB02"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->TestSpawnLatticeLaserIndex = 0;
    this->SceneComponent_PointABegin->SetupAttachment(RootComponent);
    this->SceneComponent_PointAEnd->SetupAttachment(RootComponent);
    this->SceneComponent_PointBBegin->SetupAttachment(RootComponent);
    this->SceneComponent_PointBEnd->SetupAttachment(RootComponent);
    this->SceneComponent_PointA00->SetupAttachment(RootComponent);
    this->SceneComponent_PointA01->SetupAttachment(RootComponent);
    this->SceneComponent_PointA02->SetupAttachment(RootComponent);
    this->SceneComponent_PointB00->SetupAttachment(RootComponent);
    this->SceneComponent_PointB01->SetupAttachment(RootComponent);
    this->SceneComponent_PointB02->SetupAttachment(RootComponent);
}

void AHbkEm6000_SafeRoomLaserControl::TestSwitchLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::TestSwitchAndMoveLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::TestSpawnLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::TestSpawnFloatingLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::TestMoveLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::TestDestroyLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::SwitchLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::SwitchAndMoveLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::StartUpFloatingLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::SpawnLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::SetLatticeLaserSpawnModeRapidFire() {
}

void AHbkEm6000_SafeRoomLaserControl::SetLatticeLaserSpawnModeDefault() {
}

void AHbkEm6000_SafeRoomLaserControl::SetLatticeLaserNoMove(bool Enable) {
}

void AHbkEm6000_SafeRoomLaserControl::SetFloatingLaserNoAttack(bool Enable) {
}

void AHbkEm6000_SafeRoomLaserControl::SetEnableFloatingLaser(bool Enable) {
}

void AHbkEm6000_SafeRoomLaserControl::ResetLaserControl() {
}

void AHbkEm6000_SafeRoomLaserControl::OnSignalEvent(const FHbkRhythmSynchroSignalCue& Cue) {
}

void AHbkEm6000_SafeRoomLaserControl::MoveLatticeLaser() {
}

void AHbkEm6000_SafeRoomLaserControl::MoveFloatingLaser() {
}

bool AHbkEm6000_SafeRoomLaserControl::IsNeedLatticeLaserSwitch() const {
    return false;
}

bool AHbkEm6000_SafeRoomLaserControl::IsLatticeLaserSpawnModeRapidFire() const {
    return false;
}

bool AHbkEm6000_SafeRoomLaserControl::IsLatticeLaserNoMove() const {
    return false;
}

bool AHbkEm6000_SafeRoomLaserControl::IsExistLatticeLaser() const {
    return false;
}

void AHbkEm6000_SafeRoomLaserControl::DestroyLatticeLaserAll() {
}

bool AHbkEm6000_SafeRoomLaserControl::DestroyLatticeLaser(int32 Index) {
    return false;
}

void AHbkEm6000_SafeRoomLaserControl::ChangePointIndex(int32 Index) {
}


