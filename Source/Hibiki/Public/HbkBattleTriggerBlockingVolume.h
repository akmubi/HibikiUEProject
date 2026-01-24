#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerBlockingVolume.generated.h"

class AHbkBattleBlockingVolume;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerBlockingVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkBattleBlockingVolume*> BlockingVolumeActors;
    
    HIBIKI_API FHbkBattleTriggerBlockingVolume();
};

