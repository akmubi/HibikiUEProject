#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2Progress_StatsChallenge.h"
#include "HbkRhythmTower2Progress_StatsParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2Progress_StatsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkRhythmTower2Progress_StatsChallenge> ChallengeList;
    
    HIBIKI_API FHbkRhythmTower2Progress_StatsParam();
};

