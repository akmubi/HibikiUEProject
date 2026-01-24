#pragma once
#include "CoreMinimal.h"
#include "EHbkGameEnvPhaseStartEditorState.h"
#include "HbkStaticMeshComponent.h"
#include "HbkStaticMeshLensFlareComponentPhase.h"
#include "HbkStaticMeshLensFlareComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkStaticMeshLensFlareComponent : public UHbkStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFadeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFadeFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGameEnvPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvPhaseStartEditorState PhaseStartEditorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkStaticMeshLensFlareComponentPhase> GameEnvPhases;
    
public:
    UHbkStaticMeshLensFlareComponent(const FObjectInitializer& ObjectInitializer);

};

