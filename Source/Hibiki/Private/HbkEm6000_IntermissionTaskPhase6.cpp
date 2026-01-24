#include "HbkEm6000_IntermissionTaskPhase6.h"
#include "HbkRhythmSynchroSignalComponent.h"

AHbkEm6000_IntermissionTaskPhase6::AHbkEm6000_IntermissionTaskPhase6(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RhythmSynchroSignalComponent = CreateDefaultSubobject<UHbkRhythmSynchroSignalComponent>(TEXT("RhythmSynchroSignal"));
    this->NoteToSlowMotion = EHbkNote::None;
    this->NoteCountToSlowMotion = 0;
    this->NoteToJustBefore = EHbkNote::None;
    this->TimeRateToJustBefore = 0.00f;
}

void AHbkEm6000_IntermissionTaskPhase6::OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue) {
}

void AHbkEm6000_IntermissionTaskPhase6::OnEndFinishCamera() {
}


