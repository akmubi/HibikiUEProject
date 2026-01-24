#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmick_PendulumAction.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_PendulumAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurvePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationCount;
    
    HIBIKI_API FHbkGimmick_PendulumAction();
};

