#pragma once
#include "CoreMinimal.h"
#include "HbkComplexLaunchParam.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500ShotFourCombi.generated.h"

class AHbkProjectile;
class UAkComponent;

UCLASS(Blueprintable)
class AHbkProjectile_Em7500ShotFourCombi : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkProjectile_Em7500ShotFourCombi(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerParryEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchEvent(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

