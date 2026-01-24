#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "BossSelectTagInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBossSelectTagInterface : public UInterface {
    GENERATED_BODY()
};

class IBossSelectTagInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluation(int32 StateIndex, const FGameplayTag& Tag);
    
};

