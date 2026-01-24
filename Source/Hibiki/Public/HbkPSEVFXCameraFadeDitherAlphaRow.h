#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPSEVFXCameraFadeDitherAlphaRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkPSEVFXCameraFadeDitherAlphaRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLumAdjustStartDistVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLumAdjustEndDistVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorContrastVFX;
    
    HIBIKI_API FHbkPSEVFXCameraFadeDitherAlphaRow();
};

