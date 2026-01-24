#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutExtraChallengeProgressCategoryParam.h"
#include "HbkHideOutExtraChallengeProgressChallengeParam.h"
#include "HbkHideOutExtraChallengeProgress.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkHideOutExtraChallengeProgressCategoryParam CategoryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ChallengeOpenConditionBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkHideOutExtraChallengeProgressChallengeParam> ChallengeProgressTbl;
    
    HIBIKI_API FHbkHideOutExtraChallengeProgress();
};

