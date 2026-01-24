#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessLayerData.h"
#include "HbkPhotoModePostProcessLayerTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessLayerTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessLayerData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessLayerTableRow();
};

