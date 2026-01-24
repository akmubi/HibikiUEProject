#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BarrierActivateDelegateDelegate.h"
#include "BarrierChangeStateDelegateDelegate.h"
#include "BarrierRecoveryDelegateDelegate.h"
#include "HbkBarrierDestructionParticle.h"
#include "HbkBlockDamageParam.h"
#include "HbkBarrierComponent.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UHbkSurfaceAsset;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBarrierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierActivateDelegate OnBarrierActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierChangeStateDelegate OnBarrierDeactivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierRecoveryDelegate OnBarrierRecoveryEnable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSurfaceAsset* BarrierSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurableValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReductionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BarrierEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BarrierDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BarrierBreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBarrierDestructionParticle> BarrierDestructionEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BarrierActivateSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BarrierBreakSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBarrierEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBreakedByRepelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPepDamageOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSizeRate;
    
public:
    UHbkBarrierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBarrierWithNewValue(float NewDurable, float NewDamageRate, float NewReductionRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceType(UHbkSurfaceAsset* NewBarrierSurfaceType);
    
    UFUNCTION(BlueprintCallable)
    void SetRecoveryTime(const float NewRecoveryTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPepDamageOnly(bool IsPeppermintOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetBarrierEffectAndSE(UParticleSystem* Ef, UParticleSystem* DamageEf, UParticleSystem* BreakEf, UAkAudioEvent* ActiveSE, UAkAudioEvent* BreakSE);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRedeployment(bool NewAutoRedeployment);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam);
    
    UFUNCTION(BlueprintCallable)
    void OnPostOwnerCharaDied();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageReaction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBarrierActivate();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAnyTakeDamage(AActor* DamagedActor, float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoveryTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurableValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRedeployment() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelRecovery();
    
    UFUNCTION(BlueprintCallable)
    void BarrierRecoveryBegin();
    
    UFUNCTION(BlueprintCallable)
    void BarrierDeactivate(bool bIncrementMetrics, bool bNotInvokeEffectAndSound);
    
    UFUNCTION(BlueprintCallable)
    void BarrierActivate();
    
};

