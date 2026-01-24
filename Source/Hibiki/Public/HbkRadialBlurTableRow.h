#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkRadialBlurData.h"
#include "HbkRadialBlurTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkRadialBlurTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRadialBlurData RadialBlurData;
    
    HIBIKI_API FHbkRadialBlurTableRow();
};

