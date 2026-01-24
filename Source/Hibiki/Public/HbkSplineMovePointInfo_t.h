#pragma once
#include "CoreMinimal.h"
#include "HbkSplineMovePointInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkSplineMovePointInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> pointArray;
    
    HIBIKI_API FHbkSplineMovePointInfo_t();
};

