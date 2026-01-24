#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RockfallTriggerInterlock.generated.h"

class AHbkGimmick_RockfallSpawner;

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallTriggerInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_RockfallSpawner*> RockfallSpawners;
    
    HIBIKI_API FHbkGimmick_RockfallTriggerInterlock();
};

