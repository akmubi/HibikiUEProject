#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkDialogMessageTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkDialogMessageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    HIBIKI_API FHbkDialogMessageTableRow();
};

