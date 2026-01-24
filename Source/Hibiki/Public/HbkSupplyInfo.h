#pragma once
#include "CoreMinimal.h"
#include "HbkSupplyInfo.generated.h"

class AHbkEnemyCharacter;

USTRUCT(BlueprintType)
struct FHbkSupplyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> EnemyActor;
    
    HIBIKI_API FHbkSupplyInfo();
};

