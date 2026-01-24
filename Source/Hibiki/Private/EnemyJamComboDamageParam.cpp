#include "EnemyJamComboDamageParam.h"

FEnemyJamComboDamageParam::FEnemyJamComboDamageParam() {
    this->bIsJamCombo = false;
    this->bIsOverKill = false;
    this->bIsTransitionOverKill = false;
    this->ReceptionTime = 0.00f;
    this->AccumulationDamage = 0.00f;
    this->bIsMagnetUsed = false;
    this->bIsJamcomboAttackUsed = false;
    this->bIsMainTarget = false;
}

