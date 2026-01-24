#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPixelateOverrideData.h"
#include "HbkPixelateOverrideTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPixelateOverrideTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPixelateOverrideData PixelateData;
    
    HIBIKI_API FHbkPixelateOverrideTableRow();
};

