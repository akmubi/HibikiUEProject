#pragma once
#include "CoreMinimal.h"
#include "EHbkBPMRushWaveEndConditionType.h"
#include "HbkBPMRushWaveEndCondition.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveEndCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBPMRushWaveEndConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EnemyTypeNames;
    
    HIBIKI_API FHbkBPMRushWaveEndCondition();
};

