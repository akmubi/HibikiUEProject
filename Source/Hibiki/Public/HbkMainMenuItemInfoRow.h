#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkMainMenuItemType.h"
#include "HbkMainMenuItemInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMainMenuItemInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMainMenuItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescText;
    
    HIBIKI_API FHbkMainMenuItemInfoRow();
};

