#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeThumbnailParameter.h"
#include "HbkPhotoModeStickerParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeStickerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPhotoModeThumbnailParameter> StickerList;
    
    HIBIKI_API FHbkPhotoModeStickerParameter();
};

