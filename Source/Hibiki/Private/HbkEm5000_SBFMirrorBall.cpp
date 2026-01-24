#include "HbkEm5000_SBFMirrorBall.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkBezierMoveComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_SBFMirrorBall::AHbkEm5000_SBFMirrorBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkMirrorBallProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->DamageType = NULL;
    this->AttackCompNumMax = 12;
    this->AttackCompNum = 8;
    this->SafeAngleY = 0.00f;
    this->InitRotationX = -30.00f;
    this->MovableAngleXMax = -20.00f;
    this->MovableAngleXMin = -40.00f;
    this->MovableAngleXMagnification = 1.00f;
    this->StandbyNote = EHbkNote::Note_Quarter;
    this->StandbyNoteCount = 1;
    this->EndWaitNote = EHbkNote::Note_Quarter;
    this->EndWaitNoteCount = 2;
    this->EndNote = EHbkNote::Note_Quarter;
    this->EndNoteCount = 2;
    this->RotateNote = EHbkNote::Note_Quarter;
    this->RotateNoteCount = 1;
    this->RotateMagnification = 0.50f;
    this->RotateEaseType = EEasingFunc::Linear;
    this->RotateEaseBlendExp = 1.00f;
    this->RotateEaseStep = 1;
    this->bIsRequestFinish = false;
    this->EndPointTraceChannel = ECC_Visibility;
    this->ContinueHitEffectTimeMax = 0.15f;
    this->LaserBehavior = EHbkSBFLaserBehavior::None;
    this->LaserBehaviorParams.AddDefaulted(12);
    this->BezierNote = EHbkNote::Note_Quarter;
    this->BezierNoteCount = 1;
    this->BezierEasingFunc = EEasingFunc::Linear;
    this->BezierCurveAsset = NULL;
    this->BezierAdjustRotation = false;
    this->ScaleEasingFunc = EEasingFunc::Linear;
    this->ScaleBlendExp = 2.00f;
    this->ScaleSteps = 2;
    this->BeginIrradiateParticle = NULL;
    this->UpdateIrradiateParticle = NULL;
    this->EndIrradiateParticle = NULL;
    this->HitParticle = NULL;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AttackCompList.AddDefaulted(12);
    this->BezierMove = CreateDefaultSubobject<UHbkBezierMoveComponent>(TEXT("BezierMove"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->EndAkComponents.AddDefaulted(12);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_SBFMirrorBall::TestProcessLaunch() {
}

void AHbkEm5000_SBFMirrorBall::TestProcessInstalled() {
}

void AHbkEm5000_SBFMirrorBall::TestProcessEnd() {
}

void AHbkEm5000_SBFMirrorBall::TestProcessDuringInstallation() {
}

void AHbkEm5000_SBFMirrorBall::TestProcessAttach() {
}

void AHbkEm5000_SBFMirrorBall::StartLaunch() {
}

void AHbkEm5000_SBFMirrorBall::StartDuringInstallation(AActor* LocationActor, const FVector& Position) {
}

void AHbkEm5000_SBFMirrorBall::StartAttach(AActor* TargetActor, FName SocketName) {
}

void AHbkEm5000_SBFMirrorBall::RequestFinish() {
}

void AHbkEm5000_SBFMirrorBall::OnBeizerEndMove(bool IsCompleted) {
}

EHbkMirrorBallProcess AHbkEm5000_SBFMirrorBall::GetProcess() const {
    return EHbkMirrorBallProcess::None;
}


