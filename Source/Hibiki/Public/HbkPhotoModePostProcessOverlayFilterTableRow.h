#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessOverlayFilterData.h"
#include "HbkPhotoModePostProcessOverlayFilterTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessOverlayFilterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessOverlayFilterData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessOverlayFilterTableRow();
};

