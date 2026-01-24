#include "HbkAnimNotifyState_EnemyFindAttackLocation.h"

UHbkAnimNotifyState_EnemyFindAttackLocation::UHbkAnimNotifyState_EnemyFindAttackLocation() {
    this->AttackLocationBBKeyName = TEXT("AttackLocation");
    this->AttackTargetBBKeyName = TEXT("AttackTarget");
    this->bTargetLocation = false;
    this->LimitRange = 0.00f;
    this->bForwardRange = false;
    this->SearchLength = 0.00f;
    this->SubLength = 0.00f;
    this->bIsGroundLocation = false;
    this->GroundCheckLength = 1000.00f;
}


