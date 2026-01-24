#include "HbkEm5000_EqualizerWaveGenerator.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkBarrierComponent.h"
#include "HbkBezierMoveComponent.h"
#include "HbkDamageComponent.h"
#include "HbkMimosaTargetPointComponent.h"
#include "HbkPartnerAppearPointComponent.h"
#include "HbkPartnerTargetPointComponent.h"
#include "HbkRepulsionComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkEm5000_EqualizerWaveGenerator::AHbkEm5000_EqualizerWaveGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEqualizerWaveGeneratorProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsRequestFinish = false;
    this->bIsDead = false;
    this->BezierNote = EHbkNote::None;
    this->BezierNoteCount = 0;
    this->BezierEasingFunc = EEasingFunc::Linear;
    this->BezierCurveAsset = NULL;
    this->BezierAdjustRotation = false;
    this->EndNote = EHbkNote::Note_Quarter;
    this->EndNoteCount = 4;
    this->TakeDamagePresetCategory = EHbkTakeDamagePresetCategory::Any;
    this->PrevTakeDamagePresetCategory = EHbkTakeDamagePresetCategory::Any;
    this->BarrierBreakParticle = NULL;
    this->ShieldBreakParticle = NULL;
    this->BreakParticle = NULL;
    this->EmitterSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EmitterSceneComp"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->SkeltalMeshComp = CreateDefaultSubobject<UHbkSkeletalMeshComponent>(TEXT("SkeltalMesh"));
    this->DamageComp = CreateDefaultSubobject<UHbkDamageComponent>(TEXT("Hbk Damage"));
    this->BezierMove = CreateDefaultSubobject<UHbkBezierMoveComponent>(TEXT("BezierMove"));
    this->RepulsionComp = CreateDefaultSubobject<UHbkRepulsionComponent>(TEXT("Repulsion"));
    this->PartnerTargetPointComp = CreateDefaultSubobject<UHbkPartnerTargetPointComponent>(TEXT("PartnerTargetPoint"));
    this->PartnerAppearPointComp = CreateDefaultSubobject<UHbkPartnerAppearPointComponent>(TEXT("PartnerAppearPoint"));
    this->TargetpointComp = CreateDefaultSubobject<UHbkMimosaTargetPointComponent>(TEXT("MimosaTargetPoint"));
    this->BarrierComp = CreateDefaultSubobject<UHbkBarrierComponent>(TEXT("HbkBarrierComp"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->EmitterSceneComponent->SetupAttachment(RootComponent);
    this->SkeltalMeshComp->SetupAttachment(RootComponent);
    this->PartnerTargetPointComp->SetupAttachment(RootComponent);
    this->PartnerAppearPointComp->SetupAttachment(RootComponent);
    this->TargetpointComp->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_EqualizerWaveGenerator::TestProcessLaunch() {
}

void AHbkEm5000_EqualizerWaveGenerator::TestProcessInstalled() {
}

void AHbkEm5000_EqualizerWaveGenerator::TestProcessEnd() {
}

void AHbkEm5000_EqualizerWaveGenerator::TestProcessDuringInstallation() {
}

void AHbkEm5000_EqualizerWaveGenerator::TestProcessAttach() {
}

void AHbkEm5000_EqualizerWaveGenerator::StartLaunch() {
}

void AHbkEm5000_EqualizerWaveGenerator::StartDuringInstallation(AActor* LocationActor, const FVector& Position) {
}

void AHbkEm5000_EqualizerWaveGenerator::StartAttach(AActor* TargetActor, FName SocketName) {
}

void AHbkEm5000_EqualizerWaveGenerator::SetTakeDamagePreset(EHbkTakeDamagePresetCategory Category) {
}

void AHbkEm5000_EqualizerWaveGenerator::RequestFinish() {
}

void AHbkEm5000_EqualizerWaveGenerator::OnHealthBecomedZero() {
}

void AHbkEm5000_EqualizerWaveGenerator::OnBeizerEndMove(bool IsCompleted) {
}

void AHbkEm5000_EqualizerWaveGenerator::OnActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

bool AHbkEm5000_EqualizerWaveGenerator::IsDead() const {
    return false;
}

EHbkEqualizerWaveGeneratorProcess AHbkEm5000_EqualizerWaveGenerator::GetProcess() const {
    return EHbkEqualizerWaveGeneratorProcess::None;
}

EHbkTakeDamagePresetCategory AHbkEm5000_EqualizerWaveGenerator::GetPrevDamagePreset() const {
    return EHbkTakeDamagePresetCategory::Any;
}


void AHbkEm5000_EqualizerWaveGenerator::Abort() {
}


