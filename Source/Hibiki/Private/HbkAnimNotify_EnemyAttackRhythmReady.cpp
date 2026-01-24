#include "HbkAnimNotify_EnemyAttackRhythmReady.h"

UHbkAnimNotify_EnemyAttackRhythmReady::UHbkAnimNotify_EnemyAttackRhythmReady() {
    this->PlayerSuccessToBeathit = NULL;
    this->PlayerBHActionOnSuccessfull = NULL;
    this->EnemyBHActionOnSuccessfull = NULL;
    this->bIsAttackTriggerEnable = false;
    this->PlayerHitReaction = NULL;
    this->bEnabledDodgeMode = false;
    this->bEnabledDelayedSuccess = false;
}


