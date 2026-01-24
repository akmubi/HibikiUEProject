#pragma once
#include "CoreMinimal.h"
#include "HbkEmAnimScaleOffsetChangeData.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEmAnimScaleOffsetChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    FHbkEmAnimScaleOffsetChangeData();
};

