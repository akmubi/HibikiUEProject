#pragma once
#include "CoreMinimal.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500ArmBeam.generated.h"

class AHbkEm7500_ArmBase;
class AHbkEm7500_Kale;
class UAkAudioEvent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkProjectile_Em7500ArmBeam : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkEm7500_Kale* OwnerKale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkEm7500_ArmBase* OwnerArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* NoticeParticleComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AttackNoticeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AttackNoticeSound;
    
    AHbkProjectile_Em7500ArmBeam(const FObjectInitializer& ObjectInitializer);

};

