#pragma once
#include "CoreMinimal.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkBossMissile.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBossMissile : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MoveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AimEffect;
    
public:
    AHbkBossMissile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAbortProjectileEvent();
    
};

