#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVCannonBattleHPEventData.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVCannonBattleHPEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPRate;
    
    HIBIKI_API FHbkGameplayTask_EVCannonBattleHPEventData();
};

