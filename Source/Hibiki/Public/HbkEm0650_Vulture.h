#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Em0650_St10EventTriggerDelegate.h"
#include "HbkEm0650WingProjectileData.h"
#include "HbkStrongFlyEm_Character.h"
#include "HbkEm0650_Vulture.generated.h"

class AHbkProjectile;
class AHbkProjectile_Em0650Tornado;
class UHbkStrongFlyEmLaserComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystem;

UCLASS(Blueprintable)
class AHbkEm0650_Vulture : public AHbkStrongFlyEm_Character {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0650_St10EventTrigger OnSt10EventTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float St10EventTriggerHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PriorityAttackTriggerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityAttackTriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TornadoOffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WingAttackTypeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceSettingWingAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm0650WingProjectileData> WingProjectileData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkProjectile_Em0650Tornado>> TornadoProjectileDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OnDangerMaterial_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OnDangerMaterial_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OnSafetyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OnDangerMID_ForBeatSign_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OnDangerMID_ForBeatSign_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OnSafetyMID_ForBeatSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName_Claw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName_OtherEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStrongFlyEmLaserComponent* EmLaserComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> LaserEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pLaserEffect;
    
public:
    AHbkEm0650_Vulture(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpProjectile(FName SlotName, AHbkProjectile* Projectile);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnabledSt10Event(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetPriorityAttackCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabledSt10Event() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDieForSt10Event();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPriorityAttackState();
    
    UFUNCTION(BlueprintCallable)
    void CallSt10Event();
    
};

