#pragma once
#include "CoreMinimal.h"
#include "HbkCineMaterialScalarOverride.generated.h"

USTRUCT(BlueprintType)
struct FHbkCineMaterialScalarOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Value;
    
    HIBIKI_API FHbkCineMaterialScalarOverride();
};

