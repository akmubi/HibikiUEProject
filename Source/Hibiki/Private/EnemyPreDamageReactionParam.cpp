#include "EnemyPreDamageReactionParam.h"

FEnemyPreDamageReactionParam::FEnemyPreDamageReactionParam() {
    this->DamageLevel = 0;
    this->bIsCheckDamageLevel = false;
    this->bIsSameAnimPlayBlock = false;
    this->bIsFirstHit = false;
    this->bUseFirstDamageAnim = false;
    this->bChaiAttacked = false;
    this->BeatHitTimer = 0.00f;
    this->bIsInstantKill = false;
}

