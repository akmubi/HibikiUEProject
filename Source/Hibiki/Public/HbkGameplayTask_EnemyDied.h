#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EnemyDied.generated.h"

class UHbkGameplayTask_EnemyDied;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_EnemyDied : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskEnemyDiedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskEnemyDiedDelegate OnSuccess;
    
    UHbkGameplayTask_EnemyDied(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EnemyDied* EventEnemyDiedWithGroupArray(UObject* WorldContextObject, TArray<FName> GroupNames, int32 RemainCounts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EnemyDied* EventEnemyDied(UObject* WorldContextObject, const FName GroupName, int32 RemainCounts);
    
};

