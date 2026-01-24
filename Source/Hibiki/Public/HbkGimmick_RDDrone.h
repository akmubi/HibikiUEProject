#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_RDDroneActionParam.h"
#include "HbkGimmick_RDDroneAttackParam.h"
#include "HbkGimmick_RDDroneEnemySearchInfo.h"
#include "HbkGimmick_RDDroneEnemySearchParam.h"
#include "HbkGimmick_RDDroneSound.h"
#include "HbkGimmick_RDDroneVfx.h"
#include "HbkGimmick_RDDrone.generated.h"

class AHbkEnemyCharacter;
class AHbkGimmick_RDDroneController;

UCLASS(Blueprintable)
class AHbkGimmick_RDDrone : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneActionParam ActionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneAttackParam AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneEnemySearchParam EnemySearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGimmick_RDDroneController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RDDroneEnemySearchInfo> EnemySearchInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEnemyCharacter* TargetEnemyCharacter;
    
public:
    AHbkGimmick_RDDrone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartRhythmParry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRapidFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireSign();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireAndEnd();
    
    UFUNCTION(BlueprintCallable)
    void EndRhythmParry();
    
};

