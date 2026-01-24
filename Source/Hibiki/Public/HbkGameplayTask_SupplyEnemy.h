#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "HbkGameplayTask_SupplyEnemy.generated.h"

class UHbkGameplayTask_SupplyEnemy;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_SupplyEnemy : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskSupplyEnemyDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskSupplyEnemyDelegate OnComplete;
    
    UHbkGameplayTask_SupplyEnemy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_SupplyEnemy* SupplyEnemyGroup(UObject* WorldContextObject, const FName GroupName, EHbkNote RhythmSyncNote, int32 RhythmSyncCounts, bool bForEventScene);
    
};

