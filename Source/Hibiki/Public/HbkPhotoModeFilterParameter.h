#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModePostProcessOverlayFilterGameData.h"
#include "HbkPhotoModePostProcessPrintFilterGameData.h"
#include "HbkPhotoModeFilterParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeFilterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessOverlayFilterGameData OverlayFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlayFilterGameTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPrintFilterGameData PrintFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrintFilterGameTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PresetTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverlayFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PrintFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ColorFilterList;
    
    HIBIKI_API FHbkPhotoModeFilterParameter();
};

