#pragma once
#include "CoreMinimal.h"
#include "HbkSplineMoveSpeedInto_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkSplineMoveSpeedInto_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float intervalSec;
    
    HIBIKI_API FHbkSplineMoveSpeedInto_t();
};

