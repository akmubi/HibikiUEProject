#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkGameplayTask_MGGeneratorType_t.h"
#include "HbkGameplayTask_MGGenerator.generated.h"

class UHbkBeginRhythmGameAsset;
class UHbkGameplayTask_MGGenerator;
class UHbkPlayerMiniGameComponent;
class UHbkRhythmScoreAsset;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_MGGenerator : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskMGGenerator_Success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskMGGenerator_Failure);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskMGGenerator_Success OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskMGGenerator_Failure OnFailure;
    
    UHbkGameplayTask_MGGenerator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TotalResultForRoboLaser(int32 SuccessCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void TotalResultForGenerator(int32 SuccessCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void TotalResultForDataSphere(int32 SuccessCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void TotalResultForBarrier(int32 SuccessCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void TotalResultForARProjector(int32 SuccessCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToBeginPlayerEventForRoboLaesr(UHbkPlayerMiniGameComponent* MiniGameComp);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToBeginPlayerEventForGenerator(UHbkPlayerMiniGameComponent* MiniGameComp);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToBeginPlayerEventForDataSphere(UHbkPlayerMiniGameComponent* MiniGameComp);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToBeginPlayerEventForBarrier(UHbkPlayerMiniGameComponent* MiniGameComp);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToBeginPlayerEventForARProjector(UHbkPlayerMiniGameComponent* MiniGameComp);
    
    UFUNCTION(BlueprintCallable)
    void OnEndFlickGameEnvState();
    
    UFUNCTION(BlueprintCallable)
    void InputResultForRoboLaser(bool bSuccess, int32 InputCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void InputResultForGenerator(bool bSuccess, int32 InputCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void InputResultForDataSphere(bool bSuccess, int32 InputCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void InputResultForBarrier(bool bSuccess, int32 InputCount, int32 MaxCount);
    
    UFUNCTION(BlueprintCallable)
    void InputResultForARProjector(bool bSuccess, int32 InputCount, int32 MaxCount);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGGenerator* EventGeneratorMinigame(UObject* WorldContextObject, FGameplayTagContainer Tag, TEnumAsByte<EHbkGameplayTask_MGGeneratorType_t> MiniGameType, UHbkRhythmScoreAsset* DataAsset, UHbkBeginRhythmGameAsset* BeginParamAsset);
    
};

