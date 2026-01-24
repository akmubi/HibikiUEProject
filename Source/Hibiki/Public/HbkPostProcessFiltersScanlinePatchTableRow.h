#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessFiltersScanlineDataPatch.h"
#include "HbkPostProcessFiltersScanlinePatchTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessFiltersScanlinePatchTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessFiltersScanlineDataPatch ScanlineData;
    
    HIBIKI_API FHbkPostProcessFiltersScanlinePatchTableRow();
};

