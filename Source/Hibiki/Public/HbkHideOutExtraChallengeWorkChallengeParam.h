#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutExtraChallengeWorkChallengeParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutExtraChallengeWorkChallengeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescText;
    
    HIBIKI_API FHbkHideOutExtraChallengeWorkChallengeParam();
};

