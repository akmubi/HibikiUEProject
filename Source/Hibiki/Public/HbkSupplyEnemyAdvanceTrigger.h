#pragma once
#include "CoreMinimal.h"
#include "HbkTriggerBox.h"
#include "HbkSupplyEnemyAdvanceTrigger.generated.h"

class AHbkBattleTrigger;

UCLASS(Blueprintable)
class AHbkSupplyEnemyAdvanceTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkBattleTrigger* BattleTrigger;
    
public:
    AHbkSupplyEnemyAdvanceTrigger(const FObjectInitializer& ObjectInitializer);

};

