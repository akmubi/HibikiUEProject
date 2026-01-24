#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVCannonBattleEndData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVCannonBattleEndData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipResult;
    
    HIBIKI_API FHbkGameplayTask_EVCannonBattleEndData();
};

