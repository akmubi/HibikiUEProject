#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkGameplayTask_VultureRhythmParryEvent.generated.h"

class AHbkEnemyCharacter;
class UHbkGameplayTask_VultureRhythmParryEvent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_VultureRhythmParryEvent : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskVultureRhythmParryResultDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskVultureRhythmParryResultDelegate EnemyKillEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> VultureRef;
    
public:
    UHbkGameplayTask_VultureRhythmParryEvent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_VultureRhythmParryEvent* VultureRhythmParryEvent(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyKillState();
    
};

