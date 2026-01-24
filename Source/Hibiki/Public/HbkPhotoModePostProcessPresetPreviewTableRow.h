#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessPresetPreviewData.h"
#include "HbkPhotoModePostProcessPresetPreviewTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPresetPreviewTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPresetPreviewData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessPresetPreviewTableRow();
};

