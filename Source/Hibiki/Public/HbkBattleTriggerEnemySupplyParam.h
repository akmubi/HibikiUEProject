#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBattleTriggerEnemySupplyParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerEnemySupplyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote EnemySpawnSyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySpawnSyncCount;
    
    HIBIKI_API FHbkBattleTriggerEnemySupplyParam();
};

