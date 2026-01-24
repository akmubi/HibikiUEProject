#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2Progress_StatsChallenge.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2Progress_StatsChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Selected;
    
    HIBIKI_API FHbkRhythmTower2Progress_StatsChallenge();
};

