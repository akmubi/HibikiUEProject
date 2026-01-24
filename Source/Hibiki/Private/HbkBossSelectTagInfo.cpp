#include "HbkBossSelectTagInfo.h"

FHbkBossSelectTagInfo::FHbkBossSelectTagInfo() {
    this->SelectRate = 0.00f;
    this->Election = EHbkBossSelectTagElection::All;
    this->ContinueInhibitionType = EHbkBossSelectTagContinueInhibition::None;
    this->ContinueInhibitionRate = 0.00f;
}

