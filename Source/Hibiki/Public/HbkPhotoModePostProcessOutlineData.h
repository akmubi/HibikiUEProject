#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOutlineType.h"
#include "HbkPhotoModePostProcessCannyOutlineData.h"
#include "HbkPhotoModePostProcessOutlineData.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessOutlineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutlineEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeOutlineType OutlineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessCannyOutlineData CannyFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineLumThreshold;
    
    HIBIKI_API FHbkPhotoModePostProcessOutlineData();
};

