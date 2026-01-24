#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHbkPlayerMetricsStatModifier.h"
#include "HbkPlayerMetricsFunction.generated.h"

class UHbkPlayerMetrics;
class UObject;

UCLASS(Blueprintable)
class UHbkPlayerMetricsFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkPlayerMetricsFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ModifyStat_Increment(UObject* WorldContextObject, const FName& StatName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ModifyStat_Decrement(UObject* WorldContextObject, const FName& StatName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ModifyStat(UObject* WorldContextObject, const FName& StatName, int32 Value, EHbkPlayerMetricsStatModifier Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetStatValueOnStage(UObject* WorldContextObject, const FName& StatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetStatValueOnProfile(UObject* WorldContextObject, const FName& StatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetStatValueOnGlobal(UObject* WorldContextObject, const FName& StatName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerMetrics* GetPlayerMetrics(UObject* WorldContextObject);
    
};

