#include "HbkBTTask_Em0600MoveTo.h"

UHbkBTTask_Em0600MoveTo::UHbkBTTask_Em0600MoveTo() {
    this->NodeName = TEXT("Em0600 MoveTo");
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bIsLookingCombatTarget = false;
    this->bIsLookingMoveTarget = false;
    this->HeightOffset = 500.00f;
    this->MoveLengthForwardMin = 50.00f;
    this->MoveLengthForwardMax = 500.00f;
    this->MoveLengthSideMax = 100.00f;
    this->MoveLengthHeightMax = 100.00f;
    this->MoveNoteType = EHbkNote::Note_Quarter;
    this->RestNoteCount = 0;
}

void UHbkBTTask_Em0600MoveTo::FinishExecute(bool bSuccess) {
}


