#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkToonMaskingParamData.h"
#include "HbkToonMaskingTableRow.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkToonMaskingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> VFXMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkToonMaskingParamData ParamData;
    
    HIBIKI_API FHbkToonMaskingTableRow();
};

