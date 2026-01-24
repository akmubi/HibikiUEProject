#include "HbkEnemyFire_Em5000Single.h"
#include "HbkRhythmSynchroComponent.h"

AHbkEnemyFire_Em5000Single::AHbkEnemyFire_Em5000Single(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUpdateSequence = false;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->SequenceIndex = -1;
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
}


