#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "HbkDLCItemInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkDLCItemInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemAmount;
    
    HIBIKI_API FHbkDLCItemInfoRow();
};

