#pragma once
#include "CoreMinimal.h"
#include "HbkResultDetail.generated.h"

USTRUCT(BlueprintType)
struct FHbkResultDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionScore;
    
    HIBIKI_API FHbkResultDetail();
};

