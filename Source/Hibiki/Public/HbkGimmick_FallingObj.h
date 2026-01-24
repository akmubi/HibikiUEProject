#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_FallingObj.generated.h"

class AActor;
class AController;
class UAkAudioEvent;
class UDamageType;
class UMaterialInstance;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_FallingObj : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkFallingObj_OnAttack, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkFallingObj_Hidden);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkFallingObj_OnAttack OnAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkFallingObj_Hidden OnHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> windNoiseSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pWindNoiseSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> overrideMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> OverrideMaterial;
    
public:
    AHbkGimmick_FallingObj(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_FallingObj(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    

    // Fix for true pure virtual functions not being implemented
};

