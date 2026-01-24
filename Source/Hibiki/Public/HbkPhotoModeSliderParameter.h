#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeSliderParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeSliderParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    HIBIKI_API FHbkPhotoModeSliderParameter();
};

