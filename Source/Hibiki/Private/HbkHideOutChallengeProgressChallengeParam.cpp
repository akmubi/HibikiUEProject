#include "HbkHideOutChallengeProgressChallengeParam.h"

FHbkHideOutChallengeProgressChallengeParam::FHbkHideOutChallengeProgressChallengeParam() {
    this->Status = EHbkHideOutChallengeStatus::Locked;
    this->NoticeCount = 0;
    this->bNewOpened = false;
    this->bNewUnlocked = false;
    this->bRewardAccept = false;
    this->TargetValue = 0;
    this->NowValue = 0;
}

