#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HbkEm0300_HeavyGunnerG.h"
#include "HbkEm0310_HeavyGunnerM.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkEm0310_HeavyGunnerM : public AHbkEm0300_HeavyGunnerG {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GatlingHomingTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PreAttackSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GroundAttackSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootLineLifeParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShootLineEffectTypeByStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChargePrgSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> PreAttackSignEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> GroundAttackSignEffect;
    
public:
    AHbkEm0310_HeavyGunnerM(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceivePlayerDamage(float Damage, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void PlayChargePrgSE(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayingGatlingAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetPitch() const;
    
};

