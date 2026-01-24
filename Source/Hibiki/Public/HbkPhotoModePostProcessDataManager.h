#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkPhotoModePresetType.h"
#include "HbkPhotoModePostProcessGlobalLayerData.h"
#include "HbkPhotoModePostProcessLayerData.h"
#include "HbkPhotoModePostProcessPresetData.h"
#include "HbkPhotoModePostProcessDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkPhotoModePostProcessDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PresetPreviewDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PresetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHbkPhotoModePresetType ActivePresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPresetData ActivePresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* BackgroundPreviewDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ForegroundPreviewDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LineArtDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ColorFilterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* OverlayFilterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PrintFilterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ColorGradingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessLayerData ActiveBackgroundLayerPreviewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessLayerData ActiveForegroundLayerPreviewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* GlobalPreviewDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessGlobalLayerData ActiveLensPreviewData;
    
public:
    UHbkPhotoModePostProcessDataManager();

};

