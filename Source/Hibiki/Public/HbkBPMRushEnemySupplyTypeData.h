#pragma once
#include "CoreMinimal.h"
#include "EHbkBPMRushEnemySupplyConditionType.h"
#include "HbkBPMRushEnemySupplyConditionOrder.h"
#include "HbkBPMRushEnemySupplyTypeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstSupplyIdleNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSupplyIdleNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBPMRushEnemySupplyConditionType SupplyConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemySupplyConditionOrder SupplyConditionOrder;
    
    HIBIKI_API FHbkBPMRushEnemySupplyTypeData();
};

