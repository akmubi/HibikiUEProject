#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVLaserBattleEndParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLaserBattleEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipResult;
    
    HIBIKI_API FHbkGameplayTask_EVLaserBattleEndParam();
};

