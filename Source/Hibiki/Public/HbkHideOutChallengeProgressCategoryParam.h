#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutChallengeProgressCategoryParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeProgressCategoryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 UnlockedBit;
    
    HIBIKI_API FHbkHideOutChallengeProgressCategoryParam();
};

