#pragma once
#include "CoreMinimal.h"
#include "HbkDebugJumpOption.h"
#include "HbkGameSequenceManager_LeaveMapDelegateDelegate.h"
#include "HbkGameSequenceManager_StepForwardGameSequenceDelegateDelegate.h"
#include "TngGameSystem.h"
#include "HbkGameSequenceManager.generated.h"

class UHbkGameSeqData;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameSequenceManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameSequenceManager_LeaveMapDelegate OnLeaveMapDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameSequenceManager_StepForwardGameSequenceDelegate OnStepForwardGameSequenceDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameSeqData* GameSeqData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFadeDuration;
    
public:
    UHbkGameSequenceManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StepForwardGameSequenceRetryStage(UObject* WorldContextObject, float FadeDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StepForwardGameSequence(UObject* WorldContextObject, const FName GameSeqName, float FadeDuration, const FString& FixOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsThisGameCheckpointAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPIEBootLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExecFade(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDebugJump(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNextStageNo(UObject* WorldContextObject, int32 StageNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetLastGameSequenceName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetDefaultFadeDuration(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DebugJumpTo(UObject* WorldContextObject, const FName LevelName, const FName PlayerStartName, const FHbkDebugJumpOption& Option);
    
};

