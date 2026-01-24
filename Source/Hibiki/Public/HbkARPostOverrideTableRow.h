#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkARPostOverrideData.h"
#include "HbkARPostOverrideTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkARPostOverrideTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkARPostOverrideData ARPostData;
    
    HIBIKI_API FHbkARPostOverrideTableRow();
};

