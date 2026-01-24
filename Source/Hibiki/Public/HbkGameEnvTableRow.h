#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkGesCapsuleShadow.h"
#include "HbkGesEngineDOF.h"
#include "HbkGesEnginePostProcess.h"
#include "HbkGesGameEnvLighting.h"
#include "HbkGesLensFlare.h"
#include "HbkGesLighting.h"
#include "HbkGesOutline.h"
#include "HbkGesPostProcess.h"
#include "HbkGesPostProcessMaterial.h"
#include "HbkGesProbeGI.h"
#include "HbkGesSSAO.h"
#include "HbkGesTranslucent.h"
#include "HbkGameEnvTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameEnvTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesPostProcess PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesGameEnvLighting GameEnvLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesProbeGI ProbeGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesSSAO SSAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesCapsuleShadow CapsuleShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesOutline Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesEnginePostProcess EnginePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesLighting Lighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesPostProcessMaterial PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesEngineDOF EngineDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesTranslucent Translucent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGesLensFlare LensFlare;
    
    HIBIKI_API FHbkGameEnvTableRow();
};

