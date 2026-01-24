#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessFiltersPrintFilterDataPatch.h"
#include "HbkPostProcessFiltersPrintFilterPatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersPrintFilterPatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersPrintFilterDataPatch Data;
    
    HIBIKI_API FHbkPostProcessFiltersPrintFilterPatchTableRow();
};

