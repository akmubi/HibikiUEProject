#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkEm7500ArmType.h"
#include "EHbkKaleArmMeshKit.h"
#include "HbkDamageInterface.h"
#include "HbkEnemyWeapon.h"
#include "HbkReceiveAttackInterface.h"
#include "HbkEm7500_ArmBase.generated.h"

class AActor;
class UAkAudioEvent;
class UDamageType;
class UHbkRepulsionComponent;
class UHbkShieldComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_ArmBase : public AHbkEnemyWeapon, public IHbkDamageInterface, public IHbkReceiveAttackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRepulsionComponent* HbkRepulsion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkShieldComponent* HbkShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BarrierMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BarrierMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BarrierActiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BarrierCrackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BarrierBreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BarrierBreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500ArmType ArmType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChangeMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadCPBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakArmSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakArmParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DamageMaterialSlotNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMaterialTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DamageMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossibleLookDegreeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldDurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DeteriorationHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PanelBoneNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PanelRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakPanelImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakPanelParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakPanelSound;
    
    AHbkEm7500_ArmBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetJointChainPhysicsWeight(float Weight, bool bInterp, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTakeDamage(bool IsEnableTakeDamage, bool IsEnableShield, bool IsEnableRepulsion);
    
    UFUNCTION(BlueprintCallable)
    void ResetArm(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnTryDamageBlock(AActor* DamageCauser, const UDamageType* DamageType, float DamageValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageShield(float CurrentDurableValue);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedHealth(float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void OnBrokenAllShield();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void HealDamage(float HealValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldDurable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetKaleActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJointChainPhysicsWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBreakShield() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearIsDamaged();
    
    UFUNCTION(BlueprintCallable)
    void ClearIsBreakShield();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMeshKit(EHbkKaleArmMeshKit MeshKit);
    
    UFUNCTION(BlueprintCallable)
    void BreakPanel(int32 BreakNum);
    
    UFUNCTION(BlueprintCallable)
    void BreakArm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnForceStopArmAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnActiveArm(bool IsEnable);
    

    // Fix for true pure virtual functions not being implemented
};

