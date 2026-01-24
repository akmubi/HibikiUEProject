#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneEnemySearchParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneEnemySearchParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemySearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAngleEvaluationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthRateEvaluationRate;
    
    HIBIKI_API FHbkGimmick_RDDroneEnemySearchParam();
};

