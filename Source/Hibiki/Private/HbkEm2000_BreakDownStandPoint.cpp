#include "HbkEm2000_BreakDownStandPoint.h"

AHbkEm2000_BreakDownStandPoint::AHbkEm2000_BreakDownStandPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PresageEffect = NULL;
    this->PresageEffect2 = NULL;
}

void AHbkEm2000_BreakDownStandPoint::RegisterAttackParam(const FHbkBreakDownStandPointAttackParam& Param) {
}

void AHbkEm2000_BreakDownStandPoint::OnHalfNoteEvent(int32 NoteCount) {
}

void AHbkEm2000_BreakDownStandPoint::OnBeatEvent(int32 NoteCount) {
}

void AHbkEm2000_BreakDownStandPoint::OnBarEvent(int32 NoteCount) {
}

void AHbkEm2000_BreakDownStandPoint::On8thNoteEventEx(int32 NoteCount, bool bOnBeat) {
}

void AHbkEm2000_BreakDownStandPoint::On16thNoteEventEx(int32 NoteCount, bool bOnBeat) {
}

void AHbkEm2000_BreakDownStandPoint::CallEffectPresage() {
}



