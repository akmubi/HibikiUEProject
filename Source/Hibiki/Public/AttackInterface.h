#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "HbkBlockDamageParam.h"
#include "AttackInterface.generated.h"

class AActor;
class UDamageType;

UINTERFACE(Blueprintable, MinimalAPI)
class UAttackInterface : public UInterface {
    GENERATED_BODY()
};

class IAttackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyDamage(float Damage, bool IsDead, AActor* Victim, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyConfirmedGiveDamage(AActor* Victim, const FGameplayTagContainer& DamageTags, const FGameplayTagContainer& AttackTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackGuarded(AActor* Victim, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackDodged(AActor* Victim, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackBlockedWithParam(AActor* Victim, const UDamageType* DamageType, const FHbkBlockDamageParam& BlockParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackBlocked(AActor* Victim, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetFriend(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRestrictionAttack(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsParryCounterTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsChangePartnerAttackTarget(AActor*& DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAlreadyBrokenBone(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetOverrideDamageDirection(const UDamageType* DamageType, FVector& DesiredDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetDesiredDamage(const UDamageType* DamageType, float& DesiredDamageAmmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSnapToAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanParryToAttacker(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJamComboAttack(EHbkPartnerType PartnerType, bool bPlayerAirMove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGuardToAttack(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDodgeDamage(AActor* Victim, const UDamageType* DamageType) const;
    
};

