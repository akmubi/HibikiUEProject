#pragma once
#include "CoreMinimal.h"
#include "HbkMultipleToughInitParam.h"
#include "HbkMultipleToughCompInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkMultipleToughCompInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMultipleToughInitParam> Params;
    
    HIBIKI_API FHbkMultipleToughCompInitParam();
};

