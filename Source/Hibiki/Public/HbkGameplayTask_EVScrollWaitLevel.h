#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkScrollBattle_ScrollMapKind_t.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVScrollWaitLevel.generated.h"

class UDataTable;
class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollWaitLevel;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollWaitLevel : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollWaitLevel_OnSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollWaitLevel_OnSuccess OnSuccess;
    
    UHbkGameplayTask_EVScrollWaitLevel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollWaitLevel* EventScrollWait(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, TArray<TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t>> mapKindArray, TArray<FName> spawnEnemyGroupArray, UDataTable* TalkData, FName TalkName);
    
    UFUNCTION(BlueprintCallable)
    void EndScroll(TEnumAsByte<EHbkScrollBattle_ScrollMapKind_t> mapKind);
    
};

