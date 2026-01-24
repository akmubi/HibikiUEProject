#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeCameraParameter.h"
#include "HbkPhotoModeCharacterParameter.h"
#include "HbkPhotoModeFilterParameter.h"
#include "HbkPhotoModeFrameParameter.h"
#include "HbkPhotoModeStickerParameter.h"
#include "HbkPhotoModeParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeCameraParameter CameraParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeFilterParameter FilterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeCharacterParameter CharacterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeFrameParameter FrameParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeStickerParameter StickerParameter;
    
    HIBIKI_API FHbkPhotoModeParameter();
};

