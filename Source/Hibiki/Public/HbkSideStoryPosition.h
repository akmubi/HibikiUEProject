#pragma once
#include "CoreMinimal.h"
#include "HbkSideStoryPosition.generated.h"

USTRUCT(BlueprintType)
struct FHbkSideStoryPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    HIBIKI_API FHbkSideStoryPosition();
};

