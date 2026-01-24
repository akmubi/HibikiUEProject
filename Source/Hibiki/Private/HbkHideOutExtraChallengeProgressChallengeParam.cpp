#include "HbkHideOutExtraChallengeProgressChallengeParam.h"

FHbkHideOutExtraChallengeProgressChallengeParam::FHbkHideOutExtraChallengeProgressChallengeParam() {
    this->Status = EHbkHideOutExtraChallengeStatus::Locked;
    this->NoticeCount = 0;
    this->bNewOpened = false;
    this->bNewUnlocked = false;
    this->bRewardAccept = false;
    this->TargetValue = 0;
    this->NowValue = 0;
}

