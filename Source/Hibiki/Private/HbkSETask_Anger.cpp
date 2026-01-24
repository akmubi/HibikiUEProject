#include "HbkSETask_Anger.h"

UHbkSETask_Anger::UHbkSETask_Anger() {
    this->bIsOnceEffective = false;
    this->ReEffectiveTime = 40.00f;
    this->bIsEffectived = false;
    this->ExAttackPlayedCount = 0;
    this->ExAttackPlayedNum = 2;
    this->bIsHealthTriggered = false;
    this->ReEffectiveTimer = 0.00f;
    this->AkEvent_AngerPlay = NULL;
    this->AkEvent_AngerStop = NULL;
}

void UHbkSETask_Anger::Receive_OnSetNoticeData() {
}

void UHbkSETask_Anger::Receive_OnBeginNotice() {
}


