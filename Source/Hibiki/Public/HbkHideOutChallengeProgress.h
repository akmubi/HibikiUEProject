#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutChallengeProgressCategoryParam.h"
#include "HbkHideOutChallengeProgressChallengeParam.h"
#include "HbkHideOutChallengeProgress.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkHideOutChallengeProgressCategoryParam CategoryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ChallengeOpenConditionBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkHideOutChallengeProgressChallengeParam> ChallengeProgressTbl;
    
    HIBIKI_API FHbkHideOutChallengeProgress();
};

