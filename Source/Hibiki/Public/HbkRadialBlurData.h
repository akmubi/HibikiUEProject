#pragma once
#include "CoreMinimal.h"
#include "HbkRadialBlurData.generated.h"

USTRUCT(BlueprintType)
struct FHbkRadialBlurData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadialBlurWidth;
    
    HIBIKI_API FHbkRadialBlurData();
};

