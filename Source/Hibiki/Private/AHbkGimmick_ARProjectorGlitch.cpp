#include "AHbkGimmick_ARProjectorGlitch.h"

FAHbkGimmick_ARProjectorGlitch::FAHbkGimmick_ARProjectorGlitch() {
    this->Start1State = EHbkGlitchState::AppearStartState;
    this->Start1Time = 0.00f;
    this->Start2State = EHbkGlitchState::AppearStartState;
    this->bUseGeneratorMiniGameInputState = false;
    this->GeneratorMiniGameInputState = EHbkGlitchState::AppearStartState;
    this->GeneratorMiniGameSuccessState = EHbkGlitchState::AppearStartState;
    this->MacaronPunchStartState = EHbkGlitchState::AppearStartState;
    this->MacaronPunchEndState = EHbkGlitchState::AppearStartState;
}

