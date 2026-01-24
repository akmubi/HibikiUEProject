#pragma once
#include "CoreMinimal.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500RotateEnergyAttack808Single.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectile_Em7500RotateEnergyAttack808Single : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NoticeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveExpValue;
    
public:
    AHbkProjectile_Em7500RotateEnergyAttack808Single(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

