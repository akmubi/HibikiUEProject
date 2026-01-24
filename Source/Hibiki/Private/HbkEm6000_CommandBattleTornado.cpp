#include "HbkEm6000_CommandBattleTornado.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_CommandBattleTornado::AHbkEm6000_CommandBattleTornado(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->CommandBattleMode = EHbkEm6000CommandBattleMode::Phase3;
    this->Process = EHbkCommandBattleTornadoProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->bIsWaitBarHead = false;
    this->WaitBarHeadNoteTime = 0.00f;
    this->BossBlendRateMax = 0.80f;
    this->BlendRateUpDownWaitTime = 0.00f;
    this->BlendRateUpDownInfoIndex = 0;
    this->NoteToBegin = EHbkNote::Note_Quarter;
    this->NoteCountToBegin = 5;
    this->bIsBossMeshVisible = false;
    this->OuterTornadoMoveScale = 1.00f;
    this->OuterTornadoLifeDistance = 2746.00f;
    this->OuterTornadoRotateXPerSecond = 180.00f;
    this->NoteToBlendPosition = EHbkNote::None;
    this->NoteCountToBlendPosition = 0;
    this->bIsCalledPartnerTornado = false;
    this->bIsCalledPartnerTornadoSE = false;
    this->TornadoMeshClass = NULL;
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkEm6000_CommandBattleTornado::SetPartnerAnimationProgress(int32 AnimationProgress, int32 AnimationProgressMax) {
}

void AHbkEm6000_CommandBattleTornado::ChangeSuccess() {
}

void AHbkEm6000_CommandBattleTornado::ChangeFailed() {
}

void AHbkEm6000_CommandBattleTornado::ChangeEnd() {
}

void AHbkEm6000_CommandBattleTornado::ChangeBegin() {
}

void AHbkEm6000_CommandBattleTornado::CallSpawnOuterTornado(EHbkEm6000CommandBattleCommand Command, int32 UniqueId, float Time) {
}

void AHbkEm6000_CommandBattleTornado::CallPartnerTornado(EHbkNote NoteType, int32 Count, bool bIsAdjust) {
}

void AHbkEm6000_CommandBattleTornado::CallBlockOuterTornado(int32 UniqueId) {
}


