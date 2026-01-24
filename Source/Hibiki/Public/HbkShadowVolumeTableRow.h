#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkShadowVolumeTableRow.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FHbkShadowVolumeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ShadowColorLUT;
    
    HIBIKI_API FHbkShadowVolumeTableRow();
};

