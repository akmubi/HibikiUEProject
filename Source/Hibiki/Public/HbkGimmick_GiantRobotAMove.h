#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotAMove.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotAMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAmount;
    
    HIBIKI_API FHbkGimmick_GiantRobotAMove();
};

