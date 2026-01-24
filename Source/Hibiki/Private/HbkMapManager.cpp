#include "HbkMapManager.h"

UHbkMapManager::UHbkMapManager() {
}

void UHbkMapManager::SetEmissiveColorForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, FLinearColor Color, float Intensity) {
}

void UHbkMapManager::SetAnalyticFogCompHiddenForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, bool hidden) {
}

void UHbkMapManager::SetActorsTagForTutorialStage(const UObject* WorldContextObject, const int32 Handle, const TArray<FName>& tagNames, const bool Hide, const float Intensity) {
}

void UHbkMapManager::SetActorsHiddenForLevel(UObject* WorldContextObject, int32 Handle, FName TagName, bool hidden) {
}

TSoftObjectPtr<UObject> UHbkMapManager::ObjectPathToDynamicPath(UObject* WorldContextObject, TSoftObjectPtr<UObject> SoftObjectPtr, int32 Handle) {
    return NULL;
}

void UHbkMapManager::GetActorsWithTagForLevelInstance(UObject* WorldContextObject, int32 Handle, FName TagName, TArray<AActor*>& OutActors) {
}


