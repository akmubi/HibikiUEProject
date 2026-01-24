#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Em7500FloatLaserOnPlayerParryDelegateDelegate.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500FloatLaser.generated.h"

class UAkComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class AHbkProjectile_Em7500FloatLaser : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm7500FloatLaserOnPlayerParryDelegate OnPlayerParry_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplateHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> EndPointTraceChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkProjectile_Em7500FloatLaser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

