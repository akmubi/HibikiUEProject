#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerRhythmParryArea.generated.h"

class AHbkRhythmParryAreaAnchor;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerRhythmParryArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkRhythmParryAreaAnchor*> RhythmParryAreaAnchors;
    
    HIBIKI_API FHbkBattleTriggerRhythmParryArea();
};

