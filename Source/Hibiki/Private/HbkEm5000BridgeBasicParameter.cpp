#include "HbkEm5000BridgeBasicParameter.h"

FHbkEm5000BridgeBasicParameter::FHbkEm5000BridgeBasicParameter() {
    this->InitPopularity = 0.00f;
    this->MaximumPopularity = 0.00f;
    this->SuccessRate = 0.00f;
    this->PreJustSuccessNoteType = EHbkNote::None;
    this->PreJustSuccessNoteCount = 0.00f;
    this->PostJustSuccessNoteType = EHbkNote::None;
    this->PostJustSuccessNoteCount = 0.00f;
    this->FailureDamageType = NULL;
    this->SuccessPopularityRate = 0.00f;
    this->FailurePopularityRate = 0.00f;
    this->PopularitySuperiorRate = 0.00f;
    this->PopularityInferiorRate = 0.00f;
}

