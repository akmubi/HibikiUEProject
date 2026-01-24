#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySelectionData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionRate;
    
    HIBIKI_API FHbkBPMRushEnemySelectionData();
};

