#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhotoModeTextureParameter.h"
#include "PhotoModeStickerDataAsset.generated.h"

UCLASS(Blueprintable)
class UPhotoModeStickerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeTextureParameter> StickerList;
    
public:
    UPhotoModeStickerDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

