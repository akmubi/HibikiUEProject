#include "HbkEm6000_FloatingLaser.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkImproveAttackComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm6000_FloatingLaser::AHbkEm6000_FloatingLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkFloatingLaserProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->SubNoteTimeMax = 0.00f;
    this->SubNoteTime = 0.00f;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->bIsTurnToThePlayer = false;
    this->bIsRequestLaser = false;
    this->bIsRequestMove = false;
    this->bIsBeginGroundAttack = false;
    this->bIsBeginLaserAttack = false;
    this->TargetDistance = 0.00f;
    this->NoteToNotice = EHbkNote::Note_Quarter;
    this->NoteCountToNotice = 1;
    this->NoteToAttack = EHbkNote::Note_Quarter;
    this->NoteCountToAttack = 1;
    this->NoteToMove = EHbkNote::Note_Quarter;
    this->NoteCountToMove = 1;
    this->NoteToMoveSub = EHbkNote::Note_8th;
    this->NoteCountToMoveSub = 1;
    this->LaserDistance = 500.00f;
    this->RotationInterpSpeed = 5.00f;
    this->RotationInterpSpeedRateToPlayer = 1.00f;
    this->RotationInterpSpeedRateToLaser = 5.00f;
    this->EasingFuncToAttack = EEasingFunc::Linear;
    this->EaseBlendExpToAttack = 2.00f;
    this->EaseStepToAttack = 2;
    this->EasingFuncToMove = EEasingFunc::Linear;
    this->EaseBlendExpToMove = 2.00f;
    this->EaseStepToMove = 2;
    this->NumverOfMoves = 8;
    this->MoveFluctuationLength = 200.00f;
    this->MoveFluctuationRoll = 0.00f;
    this->MoveFluctuationRollToAdd = 120.00f;
    this->MoveCount = 0;
    this->CorrectionDivisionNumber = 8;
    this->CorrectionTraceType = TraceTypeQuery1;
    this->CorrectionOffsetHeight = 10.00f;
    this->CorrectionDistanceRate = 0.90f;
    this->CorrectionFluctuationDistance = 100.00f;
    this->EnterAnim = NULL;
    this->AttackAnim = NULL;
    this->MeshComponent = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeltalMeshComponent"));
    this->GroundAttackComponent = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("GroundAttackComponent"));
    this->LaserAttackComponent = CreateDefaultSubobject<UHbkImproveAttackComponent>(TEXT("LaserAttackComponent"));
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->LaserAttackParticle = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponentGround = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompGround"));
    this->AkComponentGround->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->GroundAttackComponent->SetupAttachment(RootComponent);
    this->LaserAttackComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm6000_FloatingLaser::TestTargetPositionCorrection() {
}

void AHbkEm6000_FloatingLaser::TestRequestMove() {
}

void AHbkEm6000_FloatingLaser::TestRequestLaser() {
}

void AHbkEm6000_FloatingLaser::TestChangeMaterialYellow() {
}

void AHbkEm6000_FloatingLaser::TestChangeMaterialRed() {
}

void AHbkEm6000_FloatingLaser::TestChangeMaterialGreen() {
}

void AHbkEm6000_FloatingLaser::StartUp() {
}

void AHbkEm6000_FloatingLaser::SetTurnToThePlayer(bool Enable) {
}

void AHbkEm6000_FloatingLaser::SetSafeRoomLaserControl(AHbkEm6000_SafeRoomLaserControl* SafeRoomLaserCtrl) {
}

void AHbkEm6000_FloatingLaser::RequestMove(const FTransform& Target) {
}

void AHbkEm6000_FloatingLaser::RequestLaser() {
}

void AHbkEm6000_FloatingLaser::ReceivePlayerDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser) {
}


