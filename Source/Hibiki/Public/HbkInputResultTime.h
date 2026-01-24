#pragma once
#include "CoreMinimal.h"
#include "HbkInputResultTime.generated.h"

USTRUCT(BlueprintType)
struct FHbkInputResultTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result_Best;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result_Good;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result_Normal;
    
    HIBIKI_API FHbkInputResultTime();
};

