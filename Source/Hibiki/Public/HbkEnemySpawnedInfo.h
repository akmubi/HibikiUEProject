#pragma once
#include "CoreMinimal.h"
#include "HbkSupplyInfo.h"
#include "HbkEnemySpawnedInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnemySpawnedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSupplyInfo> SupplyInfo;
    
    HIBIKI_API FHbkEnemySpawnedInfo();
};

