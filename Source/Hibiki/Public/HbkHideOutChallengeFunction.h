#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkHideOutChallengeCategory.h"
#include "EHbkHideOutChallengeOpenConditionBits.h"
#include "HbkHideOutChallengeArtParamRow.h"
#include "HbkHideOutChallengeParamRow.h"
#include "HbkHideOutChallengeProgressChallengeParam.h"
#include "HbkHideOutChallengeWorkChallengeParam.h"
#include "HbkHideOutChallengeFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class UHbkHideOutChallengeFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkHideOutChallengeFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateUnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutChallengeNewUnlockFlagOff(UObject* WorldContextObject, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutChallengeNewUnlockFlagAllOff(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutChallengeNewOpenFlagOff(UObject* WorldContextObject, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHideOutChallengeNewOpenFlagAllOff(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenHideOutChallenge(UObject* WorldContextObject, EHbkHideOutChallengeOpenConditionBits OpenConditionBit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHideOutChallengeNewUnlocked(UObject* WorldContextObject, EHbkHideOutChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHideOutChallengeNewOpened(UObject* WorldContextObject, EHbkHideOutChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutChallengeTbl(UObject* WorldContextObject, TArray<FName>& ChallengeKeyTbl, EHbkHideOutChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutChallengeData(UObject* WorldContextObject, FHbkHideOutChallengeParamRow& Param, FHbkHideOutChallengeProgressChallengeParam& Progress, FHbkHideOutChallengeWorkChallengeParam& WorkParam, FName ChallengeKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetHideOutChallengeArtTbl(UObject* WorldContextObject, TMap<FName, FHbkHideOutChallengeArtParamRow>& ArtTbl, EHbkHideOutChallengeCategory ChallengeCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AcceptHideOutChallengeReward(UObject* WorldContextObject, FName ChallengeKey);
    
};

