#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcessColorFilterData.h"
#include "HbkPhotoModePostProcessColorFilterTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessColorFilterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcessColorFilterData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessColorFilterTableRow();
};

