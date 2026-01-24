#include "HbkGameplayTask_LoadLevel.h"

UHbkGameplayTask_LoadLevel::UHbkGameplayTask_LoadLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UHbkGameplayTask_LoadLevel* UHbkGameplayTask_LoadLevel::RequestLoadLevel(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, const FName levelInfoName, int32 mapHandle, FGameplayTagContainer InitializeTagContainer, bool AddPathFlag) {
    return NULL;
}

void UHbkGameplayTask_LoadLevel::GetLoadLevelStreamingArray(TArray<ULevelStreamingDynamic*>& Out_levelArray) {
}

int32 UHbkGameplayTask_LoadLevel::GetHandle() {
    return 0;
}


