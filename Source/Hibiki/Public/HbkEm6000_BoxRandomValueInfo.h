#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BoxRandomValueInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_BoxRandomValueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Population;
    
    HIBIKI_API FHbkEm6000_BoxRandomValueInfo();
};

