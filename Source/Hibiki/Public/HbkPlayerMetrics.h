#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkPlayerMetricsStatModifier.h"
#include "HbkPlayerMetrics.generated.h"

class AHbkGameModeBase;
class UHbkPlayerMetricsSettings;

UCLASS(Blueprintable)
class UHbkPlayerMetrics : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerMetricsSettings* MetricsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGameModeBase* CachedGameMode;
    
public:
    UHbkPlayerMetrics();

    UFUNCTION(BlueprintCallable)
    bool ModifyStat_Increment(const FName& StatName);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyStat_Decrement(const FName& StatName);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyStat(const FName& StatName, int32 Value, EHbkPlayerMetricsStatModifier Modifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedChallenge(FName ChallengeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValueOnStage(const FName& StatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValueOnProfile(const FName& StatName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValueOnGlobal(const FName& StatName) const;
    
};

