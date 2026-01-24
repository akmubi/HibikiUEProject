#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_GuardComponent.generated.h"

class AActor;
class UHbkBarrierComponent;
class UHbkBossSelectTagComponent;
class UHbkEquipComponent;
class UHbkShieldComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_GuardComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* EquipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBarrierComponent* BarrierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkShieldComponent* ShieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ShieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldLarpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyMoveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyLerpTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeHitCheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeHitForwardCheckLengthForMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeHitSideCheckLengthForMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierRepulsionCoreRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierRepulsionPersonalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRepulsionCoreRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldRepulsionPersonalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeAnimationLength;
    
public:
    UHbkEm6000_GuardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseShield();
    
    UFUNCTION(BlueprintCallable)
    void UseEscapeShot(const AActor* Attacker, bool bUseBossSelectTag);
    
    UFUNCTION(BlueprintCallable)
    void UseEscapeMove(bool bUseBossSelectTag);
    
    UFUNCTION(BlueprintCallable)
    void UseEscape(bool bUseBossSelectTag);
    
    UFUNCTION(BlueprintCallable)
    void UseBarrier();
    
    UFUNCTION(BlueprintCallable)
    void StartShieldHoming();
    
    UFUNCTION(BlueprintCallable)
    void SetSystemEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldShow(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldEnable(bool bIsEnable, bool bIsShowHideActor);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeDisable(bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetBarrierShow(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBarrierEnable(bool bIsEnable, bool bIsShowHideActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShieldBrokenAll();
    
    UFUNCTION(BlueprintCallable)
    void OnBarrierDeactivate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDamageSlotAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnySlotAnimations() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEscapeDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarrierEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseBarrier() const;
    
};

