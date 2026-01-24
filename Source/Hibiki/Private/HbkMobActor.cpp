#include "HbkMobActor.h"
#include "HbkGameAgentComponent.h"

AHbkMobActor::AHbkMobActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncAnimSpeed = true;
    this->useSignificance = false;
    this->significanceDisp = false;
    this->significanceDist = -1.00f;
    this->noRenderMaxTime = 0.00f;
    this->minTickInterval = -1.00f;
    this->IsSignificanceStateActive = false;
    this->GameAgentComponent = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkMobActor::OnSignificanceStateEvent(bool IsActive) {
}

void AHbkMobActor::OnNoteWhole_RhythmEvent(int32 NoteCount, bool bDownBeat) {
}


