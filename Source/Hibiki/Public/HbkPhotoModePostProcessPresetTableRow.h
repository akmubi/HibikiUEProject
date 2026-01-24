#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessPresetData.h"
#include "HbkPhotoModePostProcessPresetTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessPresetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessPresetData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessPresetTableRow();
};

