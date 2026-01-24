#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeWidgetModelCameraInfo.h"
#include "HbkCostumeWidgetModelParamRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeWidgetModelParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart CostumePart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeWidgetModelCameraInfo AdditionalInfo;
    
    HIBIKI_API FHbkCostumeWidgetModelParamRow();
};

