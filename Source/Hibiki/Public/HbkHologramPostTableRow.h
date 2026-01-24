#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkHologramPostData.h"
#include "HbkHologramPostTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHologramPostTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHologramPostData HologramPostData;
    
    HIBIKI_API FHbkHologramPostTableRow();
};

