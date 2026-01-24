#include "HbkInstFxRepeatedlyInfo.h"

FHbkInstFxRepeatedlyInfo::FHbkInstFxRepeatedlyInfo() {
    this->PrepInstFx = NULL;
    this->SpecifiedRhythmInstFx = NULL;
    this->bPlaySpecInstFxFirstTime = false;
    this->DelaySpecInstFxRhythm = EHbkNote::None;
    this->DelaySpecInstFxCount = 0;
    this->SyncRhythm = EHbkNote::None;
    this->RepeatCount = 0;
}

