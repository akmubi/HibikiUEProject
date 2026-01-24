#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessPrintFilterData.h"
#include "HbkPhotoModePostProcessPrintFilterTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPrintFilterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPrintFilterData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessPrintFilterTableRow();
};

