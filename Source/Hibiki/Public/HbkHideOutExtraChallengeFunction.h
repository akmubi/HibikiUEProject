#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkHideOutChallengeOpenConditionBits.h"
#include "EHbkHideOutExtraChallengeCategory.h"
#include "HbkHideOutExtraChallengeParamRow.h"
#include "HbkHideOutExtraChallengeProgressChallengeParam.h"
#include "HbkHideOutExtraChallengeScoreCondition.h"
#include "HbkHideOutExtraChallengeWorkChallengeParam.h"
#include "HbkHideOutExtraChallengeFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkHideOutExtraChallengeFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkHideOutExtraChallengeFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateUnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutExtraChallengeNewUnlockFlagOff(UObject* WorldContextObject, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutExtraChallengeNewUnlockFlagAllOff(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutExtraChallengeNewOpenFlagOff(UObject* WorldContextObject, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutExtraChallengeNewOpenFlagAllOff(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenHideOutExtraChallenge(UObject* WorldContextObject, EHbkHideOutChallengeOpenConditionBits OpenConditionBit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHideOutExtraChallengeNewUnlocked(UObject* WorldContextObject, EHbkHideOutExtraChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHideOutExtraChallengeNewOpened(UObject* WorldContextObject, EHbkHideOutExtraChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutExtraChallengeTbl(UObject* WorldContextObject, TArray<FName>& ChallengeKeyTbl, EHbkHideOutExtraChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutExtraChallengeScoreCondition(UObject* WorldContextObject, FHbkHideOutExtraChallengeScoreCondition& Score);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutExtraChallengeData(UObject* WorldContextObject, FHbkHideOutExtraChallengeParamRow& Param, FHbkHideOutExtraChallengeProgressChallengeParam& Progress, FHbkHideOutExtraChallengeWorkChallengeParam& WorkParam, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AcceptHideOutExtraChallengeReward(UObject* WorldContextObject, FName ChallengeKey);
    
};

