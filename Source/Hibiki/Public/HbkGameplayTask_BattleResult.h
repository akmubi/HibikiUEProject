#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BattleResult.generated.h"

class UHbkGameplayTask_BattleResult;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_BattleResult : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskBattleResultDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleResultDelegate ResultEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskBattleResultDelegate OnBattleAborted;
    
    UHbkGameplayTask_BattleResult(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveResultStart();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveResultEnded();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BattleResult* PlayBattleResult(UObject* WorldContextObject, bool bSkipResult, FGameplayTagContainer DeactivateActorTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BattleResult* AbortBattle(UObject* WorldContextObject, FGameplayTagContainer DeactivateActorTags);
    
};

