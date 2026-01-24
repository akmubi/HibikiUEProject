#pragma once
#include "CoreMinimal.h"
#include "HbkEm2000BreakdownSpecifyDirection.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm2000BreakdownSpecifyDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSingIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrow;
    
    HIBIKI_API FHbkEm2000BreakdownSpecifyDirection();
};

