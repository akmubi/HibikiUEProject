#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "HbkGameplayTask_SupplyEnemySomeGroup.generated.h"

class UHbkGameplayTask_SupplyEnemySomeGroup;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_SupplyEnemySomeGroup : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskSupplyEnemySomeGroupDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskSupplyEnemySomeGroupDelegate OnComplete;
    
    UHbkGameplayTask_SupplyEnemySomeGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_SupplyEnemySomeGroup* SupplyEnemySomeGroup(UObject* WorldContextObject, TArray<FName> GroupNameList, EHbkNote RhythmSyncNote, int32 RhythmSyncCounts, bool bForEventScene);
    
};

