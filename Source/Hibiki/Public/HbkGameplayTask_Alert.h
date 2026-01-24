#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_Alert.generated.h"

class UAkAudioEvent;
class UHbkGameplayTask_Alert;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_Alert : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskAlertDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskAlertDelegate OnEnd;
    
public:
    UHbkGameplayTask_Alert(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GameEnvStateEnd();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_Alert* EventAlert(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FGameplayTagContainer StartActivateTag, FName StartActivateCallSign, FGameplayTagContainer StartDeactivateTag, FName StartDeactivateCallSign, FGameplayTagContainer StartActivateExtIntTag, FName StartActivateExtIntCallSign, int32 StartActivateExtIntValue, FGameplayTagContainer StartDeactivateExtIntTag, FName StartDeactivateExtIntCallSign, int32 StartDeactivateExtIntValue, FGameplayTagContainer EndActivateTag, FName EndActivateCallSign, FGameplayTagContainer EndDeactivateTag, FName EndDeactivateCallSign, FGameplayTagContainer EndActivateExtIntTag, FName EndActivateExtIntCallSign, int32 EndActivateExtIntValue, FGameplayTagContainer EndDeactivateExtIntTag, FName EndDeactivateExtIntCallSign, int32 EndDeactivateExtIntValue, FName ChangeGameEnvStateRow, int32 ChangeCnt, float BlendBaseTime, float BlendRandomTime, float InOutWaitBaseTime, float InOutWaitRandomTime, float BlendIntervalBaseTime, float BlendIntervalRandomTime, FGameplayTagContainer GameEnvPhaseActivateTag, FName GameEnvPhaseActivateCallSign, FGameplayTagContainer GameEnvPhaseDeactivateTag, FName GameEnvPhaseDeactivateCallSign, int32 ChangeGameEnvPhaseCnt);
    
    UFUNCTION(BlueprintCallable)
    void EndAlert();
    
};

