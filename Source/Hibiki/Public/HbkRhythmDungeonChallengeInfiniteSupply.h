#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkRhythmDungeonChallengeInfiniteSupply.generated.h"

UCLASS(Blueprintable)
class UHbkRhythmDungeonChallengeInfiniteSupply : public UObject {
    GENERATED_BODY()
public:
    UHbkRhythmDungeonChallengeInfiniteSupply();

private:
    UFUNCTION(BlueprintCallable)
    void OnSyncQuarter(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSupplyEnemy();
    
};

