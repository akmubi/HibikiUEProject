#include "HbkGameQueryManager.h"

UHbkGameQueryManager::UHbkGameQueryManager() {
}

UHbkGameAgentComponent* UHbkGameQueryManager::K2_FindGameAgent(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign) {
    return NULL;
}

bool UHbkGameQueryManager::K2_FindGameActors(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign, TArray<AActor*>& OutArray) {
    return false;
}

AActor* UHbkGameQueryManager::K2_FindGameActor(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign) {
    return NULL;
}


