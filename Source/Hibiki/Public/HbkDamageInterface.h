#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "HbkDamageInterface.generated.h"

class AActor;
class UDamageType;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkDamageInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkDamageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySpecialAttack(const FGameplayTag& SpecialAttackTag, USceneComponent* ParentComp, const FName& SocketName, float InAttachTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyJamCombo(EHbkPartnerAttackType AtkType, USceneComponent* ParentComp, const FName& SocketName, float InAttachTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSpecialAttackInAttachWithSocket(const FGameplayTag& SpecialAttackTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPartnerPriorityTarget(EHbkPartnerType AtkType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsJamComboAttackInAttachWithSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsIgnoreAdjustRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsForceBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisabledPlayDamageHitEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDirectionalParry(const AActor* Attacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleTargetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAirMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetToughDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetShieldDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerTargetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCorrectionDamageRate(const FGameplayTagContainer& DamageTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBarrierDamageScale(const UDamageType* DamageType) const;
    
};

