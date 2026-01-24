#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkEnemyCategoryType.h"
#include "EHbkHideOutChallengeNoDamageJudgeType.h"
#include "HbkHideOutChallengeMetricsUtil.generated.h"

class UObject;

UCLASS(Blueprintable)
class UHbkHideOutChallengeMetricsUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkHideOutChallengeMetricsUtil();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartNoDamageJudgeArea(UObject* WorldContextObject, EHbkHideOutChallengeNoDamageJudgeType JudgeType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRhythmParryAllPerfect(UObject* WorldContextObject, EHbkEnemyCategoryType EnemyCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPartnerMiniGameResult(UObject* WorldContextObject, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDroneKill(UObject* WorldContextObject, FName DroneName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDetectiveEventSuccess(UObject* WorldContextObject, int32 EventType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDroneKill(UObject* WorldContextObject, FName DroneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDetectiveEventSuccess(UObject* WorldContextObject, int32 EventType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSt11FirstRhythmGame_SuccessCnt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSt11FirstRhythmGame_FailCnt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndNoDamageJudgeArea(UObject* WorldContextObject, EHbkHideOutChallengeNoDamageJudgeType JudgeType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSt11FirstRhythmGame_SuccessCnt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSt11FirstRhythmGame_FailCnt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddPlayerDamage(UObject* WorldContextObject, EHbkHideOutChallengeNoDamageJudgeType JudgeType, float DamageNum);
    
};

