#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeImageStretchType.h"
#include "PhotoModeTableRowBase.h"
#include "PhotoModeTextureParameter.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPhotoModeTextureParameter : public FPhotoModeTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeImageStretchType Type;
    
    HIBIKI_API FPhotoModeTextureParameter();
};

