#include "HbkGimmick_bg0260.h"

AHbkGimmick_bg0260::AHbkGimmick_bg0260(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDefaultEmissiveRed = false;
}

void AHbkGimmick_bg0260::OnCommonResourceSuccess() {
}

void AHbkGimmick_bg0260::OnBeatSynchroAction(const int32 NoteCount, bool bDownBeat) {
}

int32 AHbkGimmick_bg0260::GetIdleType() {
    return 0;
}


