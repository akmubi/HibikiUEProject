#include "HbkRestartEventInfo.h"

FHbkRestartEventInfo::FHbkRestartEventInfo() {
    this->BeginWaitNoteType = EHbkNote::None;
    this->BeginWaitNoteCount = 0;
    this->bWaitWithFade = false;
    this->RestartWipeType = EHbkTalkScreenTransition::None;
    this->WipeNoteType = EHbkNote::None;
    this->bConstCamera = false;
}

