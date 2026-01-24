#pragma once
#include "CoreMinimal.h"
#include "WorldVolumeLightingVolumeComponentTNG.h"
#include "EHbkGameEnvPhaseStartEditorState.h"
#include "HbkWorldVolumeLightingVolumeComponentPhase.h"
#include "HbkWorldVolumeLightingVolumeComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkWorldVolumeLightingVolumeComponent : public UWorldVolumeLightingVolumeComponentTNG {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvPhaseStartEditorState PhaseStartEditorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhaseC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhaseD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhaseE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkWorldVolumeLightingVolumeComponentPhase GameEnvPhaseF;
    
public:
    UHbkWorldVolumeLightingVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

