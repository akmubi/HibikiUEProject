#include "HbkRhythmSign.h"
#include "HbkCostumeComponent.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkSkeletalMeshComponent.h"

AHbkRhythmSign::AHbkRhythmSign(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCostumeMeshComp = CreateDefaultSubobject<UHbkCostumeMeshComponent>(TEXT("CostumeMesh"));
    this->HbkCostumeComp = CreateDefaultSubobject<UHbkCostumeComponent>(TEXT("HbkCostumeComp"));
    this->LocationInterpSpeed = 10.00f;
    this->LagMaxDistance = 100.00f;
    this->CommunicationEffect = NULL;
    this->EmissiveSlotName = TEXT("M_am0020_emissive");
    this->EmissiveOptionalName = TEXT("EmissiveIntensity");
    this->ColorOptionalName = TEXT("EmissiveColorTint");
    this->MinEmissiveIntensity = 5.00f;
    this->MaxEmissiveIntensity = 200.00f;
    this->BeatSignCurve = NULL;
    this->JustTimingAppendEffect = NULL;
    this->JustTimingColorParamName = TEXT("808ParticleColor_Rhythm_01");
    this->RhythmSignAsset = NULL;
    this->CatMode2ActorClass = NULL;
    this->SearchTraceChannel = TraceTypeQuery1;
    this->SearchItemEffect = NULL;
    this->SearchItemSE = NULL;
    this->SearchRangeDistance = 2000.00f;
    this->HbkCostumeMeshComp->SetupAttachment(GetMesh());
}

void AHbkRhythmSign::StopAnimation_CatMode(float BlendOut) {
}

void AHbkRhythmSign::StopAnimation(float BlendOut) {
}

UParticleSystemComponent* AHbkRhythmSign::SpawnParticle(UParticleSystem* Particle, UAkAudioEvent* AkEvent, bool bAttach, FName AttachName) {
    return NULL;
}

UAnimMontage* AHbkRhythmSign::PlayAnimation_CatMode(UAnimSequenceBase* Anim, float PlayRate, FName JumpSection) {
    return NULL;
}

UAnimMontage* AHbkRhythmSign::PlayAnimation(UAnimSequenceBase* Anim, float PlayRate, UAnimSequenceBase* CatAnim, FName JumpSection) {
    return NULL;
}

void AHbkRhythmSign::OnTargetEndPlaySequencer() {
}

void AHbkRhythmSign::OnTargetBeginPlaySequencer() {
}

void AHbkRhythmSign::OnStartCommunication(const FName Option) {
}

void AHbkRhythmSign::OnSelectPartner(int32 Index) {
}

void AHbkRhythmSign::OnRhythmJumpSuccessLanding() {
}

void AHbkRhythmSign::OnRhythmJumpModeStart(int32 Count) {
}

void AHbkRhythmSign::OnRhythmJumpFailed(int32 Count) {
}

void AHbkRhythmSign::OnRhythmJumpEnd() {
}

void AHbkRhythmSign::OnRhythmJumpCountDown(int32 Count) {
}

void AHbkRhythmSign::OnResetControlMode(EHbkPlayerControlMode OldMode) {
}

void AHbkRhythmSign::OnPostApplyCostume() {
}

void AHbkRhythmSign::OnMagnetRailStart() {
}

void AHbkRhythmSign::OnMagnetRailEnd(bool bForceEnd) {
}

void AHbkRhythmSign::OnMagnetRailAnimSwingR(float PlayRate) {
}

void AHbkRhythmSign::OnMagnetRailAnimSwingL(float PlayRate) {
}

void AHbkRhythmSign::OnMagnetRailAnimDie(float PlayRate) {
}

void AHbkRhythmSign::OnMagnetRailAnimDamage(float PlayRate) {
}

void AHbkRhythmSign::OnJustTimingAction(int32 Count) {
}

void AHbkRhythmSign::OnHealthDamage(float Value) {
}

void AHbkRhythmSign::OnEndCommunication(const FName Option) {
}

void AHbkRhythmSign::OnChangeControlMode(EHbkPlayerControlMode NewMode) {
}

void AHbkRhythmSign::OnBeatEvent(int32 NoteCount) {
}


void AHbkRhythmSign::JumpAnimSection_CatMode(const FName& NextSection) {
}

void AHbkRhythmSign::JumpAnimSection(const FName& NextSection) {
}

AHbkAm0000_CatMode2* AHbkRhythmSign::GetCatModeActor() const {
    return NULL;
}


