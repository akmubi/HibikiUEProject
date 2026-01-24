#include "HbkGameplayTask_BattleResult.h"

UHbkGameplayTask_BattleResult::UHbkGameplayTask_BattleResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGameplayTask_BattleResult::ReceiveResultStart() {
}

void UHbkGameplayTask_BattleResult::ReceiveResultEnded() {
}

UHbkGameplayTask_BattleResult* UHbkGameplayTask_BattleResult::PlayBattleResult(UObject* WorldContextObject, bool bSkipResult, FGameplayTagContainer DeactivateActorTags) {
    return NULL;
}

UHbkGameplayTask_BattleResult* UHbkGameplayTask_BattleResult::AbortBattle(UObject* WorldContextObject, FGameplayTagContainer DeactivateActorTags) {
    return NULL;
}


