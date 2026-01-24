#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessCannyOutlineData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessCannyOutlineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlurPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlurSigma;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BlurKernelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNonMaximumSuppressionPass;
    
    HIBIKI_API FHbkPhotoModePostProcessCannyOutlineData();
};

