#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMaterialSlotInfo_t.h"
#include "HbkCharaMaterialChangeRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkCharaMaterialChangeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialSlotInfo_t> slotInfoArray;
    
    FHbkCharaMaterialChangeRow();
};

