#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkCameraFadeDitherAlphaRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkCameraFadeDitherAlphaRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFadeStartDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFadeEndDist;
    
    HIBIKI_API FHbkCameraFadeDitherAlphaRow();
};

