#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBossAIController.h"
#include "HbkEm6000_SignalAttackInfo.h"
#include "HbkEm6000_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm6000_AIController : public AHbkBossAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReceiveSignalCueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_SignalAttackInfo SignalAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SignalAttackWaitBeatCountMap;
    
public:
    AHbkEm6000_AIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSignalAttackInfo(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRunningBeforeSignalAttack(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveSignalCueEvent(bool bIsReceive);
    
    UFUNCTION(BlueprintCallable)
    void ResetSignalAttackInfo();
    
    UFUNCTION(BlueprintCallable)
    void ReceivedNotifySignalAttackPre(const FGameplayTag& SignalAttackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningBeforeSignalAttackTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReceiveSignalCueEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveTimeBeforeExecuteSignalAttack(int32 BeatCount, float TimeLag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSignalAttackWaitBeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSignalAttackTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainTimeToExecuteSignalAttack(float TimeLag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainBeatCountToExecuteSignalAttack(float TimeLag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeFromReceivedNotifySignalAttackPre() const;
    
};

