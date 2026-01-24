#pragma once
#include "CoreMinimal.h"
#include "HbkGesPpmChromaticAberrationDOF.h"
#include "HbkGesPpmCinematicHalftone.h"
#include "HbkGesPpmMotionBlur.h"
#include "HbkGesPpmOcclusionOutlines.h"
#include "HbkGesPpmStencilOutlines.h"
#include "HbkGesPostProcessMaterial.generated.h"

USTRUCT(BlueprintType)
struct FHbkGesPostProcessMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPpmMotionBlur MotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPpmOcclusionOutlines OcclusionOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPpmChromaticAberrationDOF ChromaticAberrationDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPpmStencilOutlines StencilOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPpmCinematicHalftone CinematicHalftone;
    
    HIBIKI_API FHbkGesPostProcessMaterial();
};

