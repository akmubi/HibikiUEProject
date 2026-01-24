#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ElectricCoreInterlock.h"
#include "HbkGimmick_ElectricCoreUpDownAction.h"
#include "HbkGimmick_ElectricCoreUpDownRestart.h"
#include "HbkGimmick_ElectricCoreUpDownSound.h"
#include "HbkGimmick_ElectricCoreUpDownVfx.h"
#include "HbkGimmick_ElectricCoreUpDown.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_ElectricCoreUpDown : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricCoreUpDownAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricCoreUpDownRestart Restart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricCoreInterlock Interlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricCoreUpDownVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricCoreUpDownSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bElecticCoreMacaronMoved;
    
public:
    AHbkGimmick_ElectricCoreUpDown(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUpdateRestartPoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRestartTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMovedElecticCoreMacaron();
    
};

