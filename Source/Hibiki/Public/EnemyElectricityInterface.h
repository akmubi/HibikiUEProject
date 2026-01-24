#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyElectricityInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UEnemyElectricityInterface : public UInterface {
    GENERATED_BODY()
};

class IEnemyElectricityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanElectricityAttack();
    
};

