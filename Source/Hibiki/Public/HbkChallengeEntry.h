#pragma once
#include "CoreMinimal.h"
#include "HbkAchievementCondition.h"
#include "HbkChallengeEntry.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkChallengeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAchievementCondition> Conditions;
    
    FHbkChallengeEntry();
};

