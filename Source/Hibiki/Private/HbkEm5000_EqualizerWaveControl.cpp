#include "HbkEm5000_EqualizerWaveControl.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEm5000_EqualizerWaveControl::AHbkEm5000_EqualizerWaveControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Process = EHbkEqualizerWaveControlProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsRequestFinish = false;
    this->NoteToMove = EHbkNote::Note_Quarter;
    this->NoteCountToMove = 1.00f;
    this->NoteToNotice = EHbkNote::Note_Quarter;
    this->NoteCountToNotice = 1.00f;
    this->CountToNotice = 2;
    this->NoteToNoticeGlow = EHbkNote::Note_Quarter;
    this->NoteCountToNoticeGlow = 1.00f;
    this->NoteToDelayEnd = EHbkNote::Note_Quarter;
    this->NoteCountToDelayEnd = 4.00f;
    this->GridHeightCount = 8;
    this->GridWidthCount = 20;
    this->GridDepthCount = 20;
    this->GeneratorNumMax = 2;
    this->GeneratorBreakCount = 0;
    this->SpawnEqualizerWaveGroundCount = 0;
    this->TraceType = TraceTypeQuery1;
    this->TraceRadius = 30.00f;
    this->DamageType = NULL;
    this->DamageTypeAir = NULL;
    this->bIsNotice = false;
    this->NoticeElapsedTime = 0.00f;
    this->NoticeElapsedTimeMax = 0.00f;
    this->EqualizerWaveGridClass = NULL;
    this->EqualizerWaveWallClass = NULL;
    this->EqualizerWaveGroundClass = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->BoxComponents.AddDefaulted(4);
    this->TestShapePattern = EHbkEqualizerWaveShapePattern::ShapePattern1;
    this->TestUpdateWaveAttackParamIndex = 0;
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_EqualizerWaveControl::TestProcessPrepare() {
}

void AHbkEm5000_EqualizerWaveControl::TestProcessLaunch() {
}

void AHbkEm5000_EqualizerWaveControl::TestProcessGrid() {
}

void AHbkEm5000_EqualizerWaveControl::TestProcessEnd() {
}

void AHbkEm5000_EqualizerWaveControl::TestCreateWave() {
}

AHbkEm5000_EqualizerWaveGenerator* AHbkEm5000_EqualizerWaveControl::SpawnEqualizerWaveGenerator(const FVector& SpawnPos, const FRotator& SpawnRot) {
    return NULL;
}

void AHbkEm5000_EqualizerWaveControl::SetPattern(EHbkEqualizerWavePattern Pattern) {
}

void AHbkEm5000_EqualizerWaveControl::RequestFinish() {
}

void AHbkEm5000_EqualizerWaveControl::OnGeneratorEnd(AHbkEm5000_EqualizerWaveGenerator* Generator) {
}

bool AHbkEm5000_EqualizerWaveControl::IsBreakByPlayer() const {
    return false;
}

EHbkEqualizerWaveControlProcess AHbkEm5000_EqualizerWaveControl::GetProcess() const {
    return EHbkEqualizerWaveControlProcess::None;
}

void AHbkEm5000_EqualizerWaveControl::CreateWave(EHbkEqualizerWaveShapePattern ShapePattern, int32 Index) {
}


