#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessFiltersPixelateDataPatch.h"
#include "HbkPostProcessFiltersPixelatePatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersPixelatePatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersPixelateDataPatch PixelateData;
    
    HIBIKI_API FHbkPostProcessFiltersPixelatePatchTableRow();
};

