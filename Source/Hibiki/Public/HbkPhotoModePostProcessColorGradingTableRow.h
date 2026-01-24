#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessColorGradingData.h"
#include "HbkPhotoModePostProcessColorGradingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessColorGradingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessColorGradingData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessColorGradingTableRow();
};

