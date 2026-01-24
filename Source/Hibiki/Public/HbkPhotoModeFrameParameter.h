#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeThumbnailParameter.h"
#include "HbkPhotoModeFrameParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeFrameParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPhotoModeThumbnailParameter> FrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPhotoModeThumbnailParameter> WallPaperList;
    
    HIBIKI_API FHbkPhotoModeFrameParameter();
};

