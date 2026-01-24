#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmTowerLoadLevel.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTowerLoadLevel : public UObject {
    GENERATED_BODY()
public:
    UHbkGameplayTask_MGRhythmTowerLoadLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteCSEVLoadLevel();
    
};

