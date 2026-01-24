#include "HbkRestartPostProcessEvent.h"

FHbkRestartPostProcessEvent::FHbkRestartPostProcessEvent() {
    this->IsARPostEnalbed = false;
    this->ARPostState = EHbkARPostState::StartState;
}

