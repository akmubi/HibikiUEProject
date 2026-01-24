#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutChallengeWorkChallengeParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeWorkChallengeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescText;
    
    HIBIKI_API FHbkHideOutChallengeWorkChallengeParam();
};

