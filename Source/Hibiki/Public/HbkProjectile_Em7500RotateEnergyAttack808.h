#pragma once
#include "CoreMinimal.h"
#include "HbkComplexLaunchParam.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500RotateEnergyAttack808.generated.h"

class AHbkProjectile;
class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectile_Em7500RotateEnergyAttack808 : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AttackSoundPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FanAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkProjectile_Em7500RotateEnergyAttack808(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchEvent(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

