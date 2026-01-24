#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneLaserAttackParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneLaserAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    HIBIKI_API FHbkGimmick_RDDroneLaserAttackParam();
};

