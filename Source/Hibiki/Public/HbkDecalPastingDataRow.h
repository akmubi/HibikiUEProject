#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkDecalPastingParam.h"
#include "HbkDecalPastingDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkDecalPastingDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDecalPastingParam DecalPastingParam;
    
    HIBIKI_API FHbkDecalPastingDataRow();
};

