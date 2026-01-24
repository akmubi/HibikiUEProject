#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhotoModeFilterColorFilterParameter.h"
#include "PhotoModeFilterLineArtThresholdParameter.h"
#include "PhotoModeFilterOverlayFilterParameter.h"
#include "PhotoModeFilterPresetTypeParameter.h"
#include "PhotoModeFilterPrintFilterParameter.h"
#include "PhotoModeFilterDataAsset.generated.h"

UCLASS(Blueprintable)
class UPhotoModeFilterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFilterPresetTypeParameter> PresetTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFilterOverlayFilterParameter> OverlayFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFilterPrintFilterParameter> PrintFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFilterColorFilterParameter> ColorFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFilterLineArtThresholdParameter> LineArtThresholdList;
    
public:
    UPhotoModeFilterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

