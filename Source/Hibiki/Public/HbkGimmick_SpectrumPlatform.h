#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SpectrumPlatformAssignParam.h"
#include "HbkGimmick_SpectrumPlatformMesh.h"
#include "HbkGimmick_SpectrumPlatformMovement.h"
#include "HbkGimmick_SpectrumPlatformMovementExtInt.h"
#include "HbkGimmick_SpectrumPlatformSettings.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkGimmick_SpectrumPlatform.generated.h"

class UHbkSpectrumInfoComponent;

UCLASS(Blueprintable)
class AHbkGimmick_SpectrumPlatform : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectrumInfoComponent* SpectrumInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectrumPlatformSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SpectrumPlatformMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectrumPlatformMovement DefaultMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SpectrumPlatformMovementExtInt> ActivateExtIntMovements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectrumPlatformAssignParam AssignParam;
    
public:
    AHbkGimmick_SpectrumPlatform(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnActionImpact(int32 ActionType);
    
};

