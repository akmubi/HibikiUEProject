#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkToonMotionBlurAfterImageData.h"
#include "HbkToonMotionBlurAfterImageTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkToonMotionBlurAfterImageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkToonMotionBlurAfterImageData AfterImageData;
    
    HIBIKI_API FHbkToonMotionBlurAfterImageTableRow();
};

