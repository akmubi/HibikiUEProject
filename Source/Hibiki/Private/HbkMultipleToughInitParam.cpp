#include "HbkMultipleToughInitParam.h"

FHbkMultipleToughInitParam::FHbkMultipleToughInitParam() {
    this->ToughValue = 0.00f;
    this->ToughRecoveryToughByBeat = 0.00f;
    this->ToughRecoveryBeginBeatCount = 0.00f;
    this->IsToughRecoveryEnable = false;
    this->DisableParticle = NULL;
    this->SE_OnDisable = NULL;
}

