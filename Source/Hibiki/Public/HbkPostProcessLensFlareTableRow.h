#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessLensFlareData.h"
#include "HbkPostProcessLensFlareTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessLensFlareTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessLensFlareData LensFlarePostData;
    
    HIBIKI_API FHbkPostProcessLensFlareTableRow();
};

