#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemyDropItemData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemyDropItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHealth;
    
    HIBIKI_API FHbkBPMRushEnemyDropItemData();
};

