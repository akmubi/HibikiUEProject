#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BPMRushSpectrumAssignParam.h"
#include "HbkGimmick_BPMRushSpectrumMesh.h"
#include "HbkGimmick_BPMRushSpectrumMovement.h"
#include "HbkGimmick_BPMRushSpectrumMovementExtInt.h"
#include "HbkGimmick_BPMRushSpectrumSettings.h"
#include "HbkGimmick_BPMRushSpectrum.generated.h"

class UHbkSpectrumInfoComponent;

UCLASS(Blueprintable)
class AHbkGimmick_BPMRushSpectrum : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectrumInfoComponent* SpectrumInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BPMRushSpectrumSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BPMRushSpectrumMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BPMRushSpectrumMovement DefaultMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BPMRushSpectrumMovementExtInt> ActivateExtIntMovements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BPMRushSpectrumAssignParam AssignParam;
    
public:
    AHbkGimmick_BPMRushSpectrum(const FObjectInitializer& ObjectInitializer);

};

