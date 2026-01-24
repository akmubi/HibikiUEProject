#include "HbkMapManagerFunc.h"

UHbkMapManagerFunc::UHbkMapManagerFunc() {
}

int32 UHbkMapManagerFunc::SetMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName) {
    return 0;
}

void UHbkMapManagerFunc::RequestPreBeginPlayLoadLevels(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, TArray<FName> loadParamNames, FGameplayTagContainer LoadCheckTags, bool AddUniquePathFlag) {
}

void UHbkMapManagerFunc::RequestPreBeginPlayLoadLevel(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, FName loadParamName, FGameplayTagContainer LoadCheckTags, bool AddUniquePathFlag) {
}

bool UHbkMapManagerFunc::IsMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName) {
    return false;
}

void UHbkMapManagerFunc::GetPreBeginPlayMapHandle(UObject* WorldContextObject, FName loadParamName, TArray<int32>& rHandles) {
}

void UHbkMapManagerFunc::GetLoadLevelInstanceArray(UObject* WorldContextObject, FName LevelName, TArray<ULevelStreamingDynamic*>& Out_levelArray) {
}

void UHbkMapManagerFunc::ClearMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName) {
}


