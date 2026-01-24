#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutExtraChallengeScoreCondition.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeScoreCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScorePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePoints;
    
    HIBIKI_API FHbkHideOutExtraChallengeScoreCondition();
};

