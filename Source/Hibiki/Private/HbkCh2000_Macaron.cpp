#include "HbkCh2000_Macaron.h"

AHbkCh2000_Macaron::AHbkCh2000_Macaron(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LuckyHitEffect = NULL;
    this->LuckyHitSound = NULL;
}

void AHbkCh2000_Macaron::OnNextBeatForAction(int32 NoteCount) {
}


