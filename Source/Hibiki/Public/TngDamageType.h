#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "TngDamageType.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UTngDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughDamageByRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBarrierDamageByRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSyncImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLateParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayHitSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Knockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlightDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JamComboReceptionNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReactScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInvincibleNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWindStunTime;
    
    UTngDamageType();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncImpactDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKnockbackValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetDamageTagsFromDamageType(const UDamageType* DmgType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static FGameplayTagContainer GetDamageTagsFromClass(TSubclassOf<UDamageType> DmgTypeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockKnockbackValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetAttackTagsFromDamageType(const UDamageType* DmgType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static FGameplayTagContainer GetAttackTagsFromClass(TSubclassOf<UDamageType> DmgTypeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsReactionDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsIgnoreBlockNotify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsGroundDamage() const;
    
};

