#include "HbkGameplayTask_EnemyDied.h"

UHbkGameplayTask_EnemyDied::UHbkGameplayTask_EnemyDied(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UHbkGameplayTask_EnemyDied* UHbkGameplayTask_EnemyDied::EventEnemyDiedWithGroupArray(UObject* WorldContextObject, TArray<FName> GroupNames, int32 RemainCounts) {
    return NULL;
}

UHbkGameplayTask_EnemyDied* UHbkGameplayTask_EnemyDied::EventEnemyDied(UObject* WorldContextObject, const FName GroupName, int32 RemainCounts) {
    return NULL;
}


