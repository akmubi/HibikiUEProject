#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeThumbnailParameter.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkPhotoModeThumbnailParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    HIBIKI_API FHbkPhotoModeThumbnailParameter();
};

