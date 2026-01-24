#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RockfallTriggerActionBeginOverlap.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallTriggerActionBeginOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoOnce;
    
    HIBIKI_API FHbkGimmick_RockfallTriggerActionBeginOverlap();
};

