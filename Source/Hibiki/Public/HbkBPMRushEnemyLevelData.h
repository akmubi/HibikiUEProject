#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemyLevelData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemyLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispPlayerDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageRate;
    
    HIBIKI_API FHbkBPMRushEnemyLevelData();
};

