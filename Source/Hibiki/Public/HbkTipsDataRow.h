#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkTipsDataRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTipsDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeadLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TipsTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsTalkLine;
    
    FHbkTipsDataRow();
};

