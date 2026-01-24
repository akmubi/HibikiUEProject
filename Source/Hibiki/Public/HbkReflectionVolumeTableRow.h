#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkReflectionVolumeData.h"
#include "HbkReflectionVolumeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkReflectionVolumeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkReflectionVolumeData Data;
    
    HIBIKI_API FHbkReflectionVolumeTableRow();
};

