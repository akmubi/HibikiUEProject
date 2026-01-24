#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemyLevelData.h"
#include "HbkBPMRushEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SupplySettingsDataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemyLevelData LevelData;
    
    HIBIKI_API FHbkBPMRushEnemyData();
};

