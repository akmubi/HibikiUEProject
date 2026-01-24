#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessFiltersColorFilterDataPatch.h"
#include "HbkPostProcessFiltersColorFilterPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersColorFilterPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersColorFilterDataPatch Data;
    
    HIBIKI_API FHbkPostProcessFiltersColorFilterPatchTableRow();
};

