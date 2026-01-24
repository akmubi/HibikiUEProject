#include "HbkPartnerGenerateInfo.h"

FHbkPartnerGenerateInfo::FHbkPartnerGenerateInfo() {
    this->PartnerClass = NULL;
    this->PartnerType = EHbkPartnerType::None;
    this->ValidActionRange = 0.00f;
    this->PartnerCallSound = NULL;
    this->PartnerResponseSound = NULL;
    this->PartnerFirstFightSound = NULL;
    this->BeginningGimmickVoice = NULL;
    this->SucceedingGimmickVoice = NULL;
    this->FailingGimmickVoice = NULL;
}

