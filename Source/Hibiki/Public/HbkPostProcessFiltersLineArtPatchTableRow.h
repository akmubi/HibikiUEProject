#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessFiltersLineArtDataPatch.h"
#include "HbkPostProcessFiltersLineArtPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersLineArtPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersLineArtDataPatch LineArtData;
    
    HIBIKI_API FHbkPostProcessFiltersLineArtPatchTableRow();
};

