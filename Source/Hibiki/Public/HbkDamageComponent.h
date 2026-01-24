#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DamageActorDiedSignatureDelegate.h"
#include "DamageBlockDelegateDelegate.h"
#include "DamageChangedHealthByDamagedDelegateDelegate.h"
#include "DamageChangedHealthDelegateDelegate.h"
#include "DamageHealthBecomedZeroDelegateDelegate.h"
#include "DamagePostTakeDamageSignatureDelegate.h"
#include "DamageTriggerDelegateDelegate.h"
#include "EHbkTakeDamagePresetCategory.h"
#include "HbkDamageCorrection.h"
#include "HbkTakeDamageInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkDamageComponent.generated.h"

class AActor;
class AController;
class AHbkCharacter;
class UDamageType;
class UHbkDamageTask;
class UHbkSurfaceAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamagePostTakeDamageSignature OnPostTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTriggerDelegate OnDamageTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageBlockDelegate OnDamageBlock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageBlockDelegate OnDamageDodge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageBlockDelegate OnDamageGuard;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageActorDiedSignature OnActorDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageChangedHealthDelegate OnChangedHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageChangedHealthByDamagedDelegate OnDamagedHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageHealthBecomedZeroDelegate OnHealthBecomedZero;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSurfaceAsset* SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSurfaceAsset* SurfaceTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDamageTask> DeathTaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTakeDamagePresetCategory TakeDamagePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTakeDamageInfo TakeDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitCollisionOnlyTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageTriggerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerWhenHealthZero;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 TriggerCauserFlags;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTriggerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoZeroDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDamageCorrection> DamageCorrectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitDisableTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDamageTask* DeathTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOwnerDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnDeadMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDamageReserved;
    
public:
    UHbkDamageComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TakeDamageWithDamageType(const TSubclassOf<UDamageType> DamageTypeClass, bool bApplyDiffParam);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamage(float Damage, bool bApplyDiffParam);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideSurfaceType(UHbkSurfaceAsset* OverrideSurface);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHealth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDied();
    
    UFUNCTION(BlueprintCallable)
    void SetDamageCorrectionList(const TArray<FHbkDamageCorrection>& InDamageCorrectionList);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
    UFUNCTION(BlueprintCallable)
    bool PerformDeath(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void NotifyTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTakeDamage(float Damage, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttackImpact(const AHbkCharacter* Attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTakeDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetCurrentDamageTag(const AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetCurrentAttackTag(const AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void EnableTakeDamage();
    
    UFUNCTION(BlueprintCallable)
    void DisableTakeDamage();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideSurfaceType(UHbkSurfaceAsset* OverrideSurface);
    
    UFUNCTION(BlueprintCallable)
    void ClearOldDamageParam();
    
    UFUNCTION(BlueprintCallable)
    FVector CalcDamageInpulseDirection(bool Is2D);
    
    UFUNCTION(BlueprintCallable)
    float AddHealth(float Value);
    
};

