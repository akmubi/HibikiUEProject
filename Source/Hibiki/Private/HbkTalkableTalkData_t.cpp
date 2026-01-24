#include "HbkTalkableTalkData_t.h"

FHbkTalkableTalkData_t::FHbkTalkableTalkData_t() {
    this->TalkType = EHbkTalkableType::None;
    this->SequentiallyLoop = false;
    this->ActionInterval = 0.00f;
    this->bUnPlayable = false;
    this->bNoInteractWhenEnd = false;
    this->bNoDamageWhenEnd = false;
    this->Priority = 0;
}

