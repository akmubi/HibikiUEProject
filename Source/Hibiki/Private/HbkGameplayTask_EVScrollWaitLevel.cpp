#include "HbkGameplayTask_EVScrollWaitLevel.h"

UHbkGameplayTask_EVScrollWaitLevel::UHbkGameplayTask_EVScrollWaitLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkGameplayTask_EVScrollWaitLevel::TalkEnd(const FHbkTalkContext TalkContext) {
}

UHbkGameplayTask_EVScrollWaitLevel* UHbkGameplayTask_EVScrollWaitLevel::EventScrollWait(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, TArray<TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t>> mapKindArray, TArray<FName> spawnEnemyGroupArray, UDataTable* TalkData, FName TalkName) {
    return NULL;
}

void UHbkGameplayTask_EVScrollWaitLevel::EndScroll(TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t> mapKind) {
}


