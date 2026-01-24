#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhotoModeTextureParameter.h"
#include "PhotoModeFrameDataAsset.generated.h"

UCLASS(Blueprintable)
class UPhotoModeFrameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeTextureParameter> FrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhotoModeTextureParameter> WallPaperList;
    
public:
    UPhotoModeFrameDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

