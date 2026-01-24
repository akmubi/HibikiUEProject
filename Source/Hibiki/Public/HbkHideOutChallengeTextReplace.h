#pragma once
#include "CoreMinimal.h"
#include "HbkHideOutChallengeTextReplace.generated.h"

USTRUCT(BlueprintType)
struct FHbkHideOutChallengeTextReplace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReplaceText_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReplaceText_2;
    
    HIBIKI_API FHbkHideOutChallengeTextReplace();
};

