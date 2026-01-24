#pragma once
#include "CoreMinimal.h"
#include "HbkInteractTalkParam.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FHbkInteractTalkParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnplayable;
    
    HIBIKI_API FHbkInteractTalkParam();
};

