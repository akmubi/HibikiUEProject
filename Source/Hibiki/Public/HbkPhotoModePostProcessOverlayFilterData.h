#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOverlayFilterType.h"
#include "HbkPhotoModePostProcessOverlayFilterData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessOverlayFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoModeOverlayFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* OverlayTexture;
    
    HIBIKI_API FHbkPhotoModePostProcessOverlayFilterData();
};

