#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000IntRange.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000IntRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    FHbkEm5000IntRange();
};

