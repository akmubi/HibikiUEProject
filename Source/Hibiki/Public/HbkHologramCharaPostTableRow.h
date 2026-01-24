#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkHologramCharaPostData.h"
#include "HbkHologramCharaPostTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkHologramCharaPostTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHologramCharaPostData HologramPostData;
    
    HIBIKI_API FHbkHologramCharaPostTableRow();
};

