#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BehaviorHumanBaseComponent.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "HbkEm6000_BehaviorPhase4Component.generated.h"

class UHbkEm6000_StageHatchComponent;
class UHbkRhythmSynchroSignalComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_BehaviorPhase4Component : public UHbkEm6000_BehaviorHumanBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_StageHatchComponent* StageHatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmountForTriggerHatchIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeForTriggerHatchIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCountForWaitSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatticeLaserModeRapidFireWaitMoveNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatticeLaserModeRapidFireWaitActivateNoteCount;
    
public:
    UHbkEm6000_BehaviorPhase4Component(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredCurrentHatchSideEvent();
    
    UFUNCTION(BlueprintCallable)
    bool OnMultiEventForHatchInTrigger();
    
    UFUNCTION(BlueprintCallable)
    bool OnDamageCountEventForWaitHatchInSignal();
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForLaserActivateStart(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForLaserActivateEnd(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchOutStart(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchOutEnd(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchMoveStart_RapidFire(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchMoveEnd_RapidFire(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchInStart(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForHatchInEnd(float DeltaTime, float ElapsedTime);
    
};

