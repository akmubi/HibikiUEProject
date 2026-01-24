#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2PlayerGrowth.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2PlayerGrowth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    HIBIKI_API FHbkRhythmTower2PlayerGrowth();
};

