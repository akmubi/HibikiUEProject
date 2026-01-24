#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_RDDroneLaserAttackParam.h"
#include "HbkGimmick_RDDroneLaserVfx.h"
#include "HbkGimmick_RDDroneLaser.generated.h"

class AHbkGimmick_RDDrone;
class UHbkImproveAttackComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AHbkGimmick_RDDroneLaser : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneLaserAttackParam AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneLaserVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGimmick_RDDrone* Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AttachedSkeletalMeshComp;
    
public:
    AHbkGimmick_RDDroneLaser(const FObjectInitializer& ObjectInitializer);

};

