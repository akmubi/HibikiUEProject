#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkMultiItemTickets.h"
#include "HbkGameplayTask_EVScrollSpawnItem.generated.h"

class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollSpawnItem;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollSpawnItem : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollSpawnItem_OnSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSpawnItem_OnSuccess OnSuccess;
    
    UHbkGameplayTask_EVScrollSpawnItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncNoteWhole(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollSpawnItem* EventScrollSpawnItem(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, FHbkMultiItemTickets Tickets);
    
};

