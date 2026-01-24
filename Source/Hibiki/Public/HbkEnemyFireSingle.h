#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireBase.h"
#include "HbkEnemyFireSingle.generated.h"

UCLASS(Blueprintable)
class AHbkEnemyFireSingle : public AHbkEnemyFireBase {
    GENERATED_BODY()
public:
    AHbkEnemyFireSingle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginRhythmParryAttack();
    
};

