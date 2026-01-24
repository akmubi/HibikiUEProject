#pragma once
#include "CoreMinimal.h"
#include "HbkColorGradingGlobalBlendParam.h"
#include "HbkEnginePostProcessSettingsTableRow.h"
#include "HbkExponentialHeightFogBlendParam.h"
#include "HbkExponentialHeightFogTableRow.h"
#include "HbkGameEnvBlendWeight.h"
#include "TngGameSystem.h"
#include "HbkGameEnvManager.generated.h"

class AHbkCharacter;
class UHbkToonMaskingState;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameEnvManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingState* State;
    
    UHbkGameEnvManager();

    UFUNCTION(BlueprintCallable)
    void RevertHbkEnginePostProcessVolumeBlend(UWorld* World, const FString& VolumeName, const FHbkGameEnvBlendWeight& BlendWeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_EndToonMasking(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Blueprint_BeginToonMasking(UObject* WorldContextObject, FName ToonMaskingRowName, bool bIsPlayerMasked, AHbkCharacter* MaskedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkExponentialHeightFogBlendDT(UWorld* World, const FHbkExponentialHeightFogTableRow& Row, const FHbkGameEnvBlendWeight& BlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkExponentialHeightFogBlend(UWorld* World, const FHbkExponentialHeightFogBlendParam& TargetValue, const FHbkGameEnvBlendWeight& BlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkEnginePostProcessVolumeBlendDT(UWorld* World, const FString& VolumeName, const FHbkEnginePostProcessSettingsTableRow& Row, const FHbkGameEnvBlendWeight& BlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkEnginePostProcessVolumeBlend(UWorld* World, const FString& VolumeName, const FHbkColorGradingGlobalBlendParam& TargetValue, const FHbkGameEnvBlendWeight& BlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void BeginHbkEHFDataTableBlend(UWorld* World, const FHbkGameEnvBlendWeight& BlendWeight);
    
};

