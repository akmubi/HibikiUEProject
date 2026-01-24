#include "HbkGimmick_RhythmActivateControl.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

AHbkGimmick_RhythmActivateControl::AHbkGimmick_RhythmActivateControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Tags.AddDefaulted(1);
    this->BillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("BilliboardComp"));
    this->bExecSave = false;
    this->bSaveType = EHbkGimmick_RhythmActivate_SaveType::RA_SAVE_NONE;
    this->loopFlag = false;
    this->bImmediate = false;
    this->MaxLoopCnt = 0;
    this->MaxMidiActCnt = 0;
    this->BillboardComp->SetupAttachment(RootComponent);
}

void AHbkGimmick_RhythmActivateControl::SyncNoteWhole(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_RhythmActivateControl::SyncNoteQuarter(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_RhythmActivateControl::SyncNoteHalf(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_RhythmActivateControl::SyncNote8th(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_RhythmActivateControl::SyncNote16th(int32 noteCnt, bool bDownBeat) {
}

void AHbkGimmick_RhythmActivateControl::MidiEvent(int32 NoteNo, int32 Velocity) {
}


