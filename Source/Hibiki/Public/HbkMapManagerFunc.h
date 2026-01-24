#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "HbkMapManagerFunc.generated.h"

class UHbkLoadLevelInstanceAssetData;
class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMapManagerFunc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkMapManagerFunc();

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SetMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestPreBeginPlayLoadLevels(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, TArray<FName> loadParamNames, FGameplayTagContainer LoadCheckTags, bool AddUniquePathFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestPreBeginPlayLoadLevel(UObject* WorldContextObject, UHbkLoadLevelInstanceAssetData* pAssetData, FName loadParamName, FGameplayTagContainer LoadCheckTags, bool AddUniquePathFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPreBeginPlayMapHandle(UObject* WorldContextObject, FName loadParamName, TArray<int32>& rHandles);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLoadLevelInstanceArray(UObject* WorldContextObject, FName LevelName, TArray<ULevelStreamingDynamic*>& Out_levelArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearMapGameFlag(UObject* WorldContextObject, FName CategoryName, FName RowName);
    
};

