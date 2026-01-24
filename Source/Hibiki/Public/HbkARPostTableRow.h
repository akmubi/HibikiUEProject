#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkARPostData.h"
#include "HbkARPostTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkARPostTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkARPostData ARPostData;
    
    HIBIKI_API FHbkARPostTableRow();
};

