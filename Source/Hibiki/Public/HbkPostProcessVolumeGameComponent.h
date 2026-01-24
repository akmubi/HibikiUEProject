#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessVolumeComponentTNG.h"
#include "EHbkGameEnvPhaseStartEditorState.h"
#include "HbkPostProcessVolumeGameComponentPhase.h"
#include "HbkPostProcessVolumeGameComponent.generated.h"

class AHbkAmbientCubemapVolumePhaseActor;
class AHbkShadowVolumePhaseActor;
class UTexture;

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPostProcessVolumeGameComponent : public UHbkPostProcessVolumeComponentTNG {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharaEnvLightingTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEnvShadowOnlyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEmissiveDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvPhaseStartEditorState PhaseStartEditorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumePhaseActor* ShadowVolumePhaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumePhaseActor* ShadowVolume2PhaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumePhaseActor* ShadowVolume3PhaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkShadowVolumePhaseActor* ShadowVolume4PhaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkAmbientCubemapVolumePhaseActor* AmbientCubemapVolumePhaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhaseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhaseD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhaseE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPostProcessVolumeGameComponentPhase GameEnvPhaseF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* GameEnvShadowColorLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* GameEnvShadowColorLUT2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* GameEnvShadowColorLUT3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* GameEnvShadowColorLUT4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideAmbientCubemapTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* GameEnvAmbientCubemapTex;
    
public:
    UHbkPostProcessVolumeGameComponent(const FObjectInitializer& ObjectInitializer);

};

