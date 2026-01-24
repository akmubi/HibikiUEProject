#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkEnemyTipsTalk.h"
#include "HbkGameFlagFunction.generated.h"

class AActor;
class UHbkGraffitiCollectSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameFlagFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkGameFlagFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStageItemFlag(UObject* WorldContextObject, FName FlagName, int32 NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNowStageNumber(UObject* WorldContextObject, int32 NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNowLevelStageNumber(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInventoryItemFlag(UObject* WorldContextObject, FName FlagName, int32 SetFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInStageDifficultyChanged(UObject* WorldContextObject, bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutFlag(UObject* WorldContextObject, FName FlagName, int32 SetFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnteredCentralRoomFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnemyTipsTalkFlag(UObject* WorldContextObject, EHbkEnemyTipsTalk EnemyTipsTalkID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableTutorialSkipFlag(UObject* WorldContextObject, bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetClearedStageNumber(UObject* WorldContextObject, int32 NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCentralRoomUnlockFirstTimeDirection(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCentralRoomUnlockAllDirection(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAllStageClearedFlag(UObject* WorldContextObject, bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAfterLoadGotoHideOut(UObject* WorldContextObject, bool NewFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareNewGameFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareDebugJumpGameFlag(UObject* WorldContextObject, const TArray<FName>& DummyCheckPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeInstanceGameFlagName(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInStageDifficultyChanged(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFoundAllGraffitiCollect(UObject* WorldContextObject, UHbkGraffitiCollectSettingsDataAsset* SettingsData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnteredCentralRoomFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnableTutorialSkipFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCentralRoomUnlockAllDirection(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAllStageSpectraRoomClear(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAllSpectraHubSpectraRoomClear(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAfterLoadGotoHideOut(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetStageItemFlag(UObject* WorldContextObject, FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNowStageNumberEx(int32& MainStageNo, int32& SubStageNo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNowStageNumber(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetInventoryItemFlag(UObject* WorldContextObject, FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool AfterClear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetHideOutFlag(UObject* WorldContextObject, FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetGraffitiCollectCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetEnemyTipsTalkFlag(UObject* WorldContextObject, EHbkEnemyTipsTalk EnemyTipsTalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetClearedStageNumberEx(int32& MainStageNo, int32& SubStageNo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetClearedStageNumber(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCheckPointFlag(UObject* WorldContextObject, FName FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetBattleGameOverCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAllStageClearedFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DumpCheckPointFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearInstanceGameFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool StageStart);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddInHideOutCount(UObject* WorldContextObject, int32 StageNo, bool AfterClear);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddBattleGameOverCount(UObject* WorldContextObject);
    
};

