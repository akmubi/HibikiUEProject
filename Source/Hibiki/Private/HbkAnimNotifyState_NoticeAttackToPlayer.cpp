#include "HbkAnimNotifyState_NoticeAttackToPlayer.h"

UHbkAnimNotifyState_NoticeAttackToPlayer::UHbkAnimNotifyState_NoticeAttackToPlayer() {
    this->EnableDistance = 600.00f;
    this->bHitOnFlying = false;
    this->ForceAvoidType = EHbkPlayerAutoActionAvoidType::None;
    this->bHighPriorityAvoid = false;
}


