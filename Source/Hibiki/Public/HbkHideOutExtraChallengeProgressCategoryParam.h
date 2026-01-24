#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutExtraChallengeProgressCategoryParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeProgressCategoryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 UnlockedBit;
    
    HIBIKI_API FHbkHideOutExtraChallengeProgressCategoryParam();
};

