#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessGlobalLayerData.h"
#include "HbkPhotoModePostProcessGlobalLayerTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessGlobalLayerTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessGlobalLayerData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessGlobalLayerTableRow();
};

