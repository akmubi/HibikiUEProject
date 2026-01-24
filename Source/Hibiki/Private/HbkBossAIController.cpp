#include "HbkBossAIController.h"

AHbkBossAIController::AHbkBossAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBehaviorTreeStopForced = false;
}

bool AHbkBossAIController::ChangeStateToAttackBossWithTagParam(FGameplayTag AttackNameTag, const FHbkEnemyAttackParam& OverrideParam) {
    return false;
}

bool AHbkBossAIController::ChangeStateToActionWithTag(FGameplayTag ActionNameTag, const FHbkActionParam& InActionParam) {
    return false;
}






