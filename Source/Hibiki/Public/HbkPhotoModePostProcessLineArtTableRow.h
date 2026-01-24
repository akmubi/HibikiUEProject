#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPhotoModePostProcesstLineArtData.h"
#include "HbkPhotoModePostProcessLineArtTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModePostProcessLineArtTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModePostProcesstLineArtData Data;
    
    HIBIKI_API FHbkPhotoModePostProcessLineArtTableRow();
};

