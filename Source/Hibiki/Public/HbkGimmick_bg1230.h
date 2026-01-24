#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_bg1230_SaveType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1230_AssetInfo.h"
#include "HbkGimmick_bg1230.generated.h"

class AActor;
class AController;
class UDamageType;
class UMaterialInstance;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkGimmick_bg1230 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg1230_Explosion);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmibk_bg1230_Interact);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmibk_bg1230_HPEventDelegate, FName, EventName);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> RedLightDefaultMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pRedLightDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> RedLightOverrideMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1230_AssetInfo AssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pRedLightOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmibk_bg1230_Interact OnInteracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1230_Explosion OnExplosion;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmibk_bg1230_HPEventDelegate OnHPEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg1230_SaveType_t bSaveState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* pHpVFXComp;
    
public:
    AHbkGimmick_bg1230(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRotAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetResume();
    
    UFUNCTION(BlueprintCallable)
    void SetActivateInteract(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void ReceivedEvent();
    
    UFUNCTION(BlueprintCallable)
    void PowerSupplyEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void DispWarning();
    
};

