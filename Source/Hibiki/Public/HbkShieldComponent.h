#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkShieldCompBlockParam.h"
#include "ShieldBrokenDelegate.h"
#include "ShieldDamageDelegateDelegate.h"
#include "ShieldDamageMultiZoneDelegateDelegate.h"
#include "ShieldTryDamageBlockDelegate.h"
#include "HbkShieldComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UDamageType;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkShieldComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldBroken BrokenAllShield;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldDamageDelegate DamageShield;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldDamageMultiZoneDelegate DamageShieledMultiZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldTryDamageBlock TryDamageBlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockableYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BlockSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiZoneBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkShieldCompBlockParam> BlockZoneParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForceBlock;
    
public:
    UHbkShieldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInvincible(const bool NewInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetDurableValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBlockFlag(bool NewFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurableValueMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurableValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDamageValue();
    
    UFUNCTION(BlueprintCallable)
    bool ForceBreakShield();
    
    UFUNCTION(BlueprintCallable)
    bool ChallengeDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBlock() const;
    
};

