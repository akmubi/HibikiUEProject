#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkSoloLightingData.h"
#include "HbkSoloLightingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkSoloLightingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSoloLightingData SoloLightingData;
    
    HIBIKI_API FHbkSoloLightingTableRow();
};

