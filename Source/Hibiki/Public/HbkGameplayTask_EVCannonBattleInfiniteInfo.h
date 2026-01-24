#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_EVCannonBattleInfiniteInfo.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_EVCannonBattleInfiniteInfo : public UObject {
    GENERATED_BODY()
public:
    UHbkGameplayTask_EVCannonBattleInfiniteInfo();

private:
    UFUNCTION(BlueprintCallable)
    void OnSyncQuarter(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSupplyEnemy();
    
};

