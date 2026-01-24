#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPixelateData.h"
#include "HbkPixelateTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPixelateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPixelateData PixelateData;
    
    HIBIKI_API FHbkPixelateTableRow();
};

