#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkGameplayTask_ArmadilloRhythmParryEvent.generated.h"

class AHbkEnemyCharacter;
class UAkAudioEvent;
class UHbkGameplayTask_ArmadilloRhythmParryEvent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_ArmadilloRhythmParryEvent : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskArmadilloRhythmParryResultDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskArmadilloRhythmParryResultDelegate SuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskArmadilloRhythmParryResultDelegate FailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskArmadilloRhythmParryResultDelegate EnemyDiedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuccessAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailedAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> ArmadilloRef;
    
public:
    UHbkGameplayTask_ArmadilloRhythmParryEvent();

private:
    UFUNCTION(BlueprintCallable)
    void Recieve_StartToLeaveMap();
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessInstantKillBeatHit();
    
    UFUNCTION(BlueprintCallable)
    void OnOneBeatInstantKillBeatHit();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedInstantKillBeatHit();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDied();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_ArmadilloRhythmParryEvent* ArmadilloRhythmParryEvent(UObject* WorldContextObject, UAkAudioEvent* SuccessAkEvent, UAkAudioEvent* FailedAkEvent);
    
};

