#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_FlickGameEnvState.generated.h"

class UHbkGameEnvState;
class UHbkGameplayTask_FlickGameEnvState;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_FlickGameEnvState : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskFlickGameEnvState_End);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskFlickGameEnvState_Change);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskFlickGameEnvState_Change OnChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskFlickGameEnvState_End OnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvState;
    
    UHbkGameplayTask_FlickGameEnvState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_FlickGameEnvState* EventBeginFlickGameEnvState(UObject* WorldContextObject, FName ChangeGameEnvStateRow, int32 ChangeCnt, float BlendBaseTime, float BlendRandomTime, float InOutWaitBaseTime, float InOutWaitRandomTime, float BlendIntervalBaseTime, float BlendIntervalRandomTime, FGameplayTagContainer GameEnvPhaseActivateTag, FName GameEnvPhaseActivateCallSign, FGameplayTagContainer GameEnvPhaseDeactivateTag, FName GameEnvPhaseDeactivateCallSign, int32 ChangeGameEnvPhaseCnt);
    
    UFUNCTION(BlueprintCallable)
    void EndFlickGameEnvState();
    
};

