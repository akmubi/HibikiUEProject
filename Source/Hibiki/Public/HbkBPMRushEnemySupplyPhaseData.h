#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySupplyCameraData.h"
#include "HbkBPMRushEnemySupplyData.h"
#include "HbkBPMRushEnemySupplyPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLongRangeAttackPermission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemySupplyCameraData SupplyCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemySupplyData SupplyData;
    
    HIBIKI_API FHbkBPMRushEnemySupplyPhaseData();
};

