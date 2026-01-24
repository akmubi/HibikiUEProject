#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "HbkGesCapsuleShadow.h"
#include "HbkGesEngineDOF.h"
#include "HbkGesEnginePostProcess.h"
#include "HbkGesGameEnvLighting.h"
#include "HbkGesHeatHaze.h"
#include "HbkGesLensFlare.h"
#include "HbkGesLighting.h"
#include "HbkGesOutline.h"
#include "HbkGesPostProcess.h"
#include "HbkGesPostProcessMaterial.h"
#include "HbkGesProbeGI.h"
#include "HbkGesSSAO.h"
#include "HbkGesTranslucent.h"
#include "HbkCineGameEnvActor.generated.h"

class UHbkCineGameEnvState;

UCLASS(Blueprintable)
class AHbkCineGameEnvActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName LabelForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GameEnvTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPostProcess PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesGameEnvLighting GameEnvLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesProbeGI ProbeGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesSSAO SSAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesCapsuleShadow CapsuleShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesOutline Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesEnginePostProcess EnginePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesLighting Lighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesPostProcessMaterial PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesEngineDOF EngineDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesTranslucent Translucent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesLensFlare LensFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHbkGesHeatHaze HeatHaze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCutsceneCutChangeSkipRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkCineGameEnvState* CineGameEnvState;
    
public:
    AHbkCineGameEnvActor(const FObjectInitializer& ObjectInitializer);

};

