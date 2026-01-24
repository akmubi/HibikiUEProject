#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StatusEffectDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkStatusEffectComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UHbkStatusEffectTaskBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectDelegate OnBeginEffective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEffectDelegate OnEndEffective;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHbkStatusEffectTaskBase>> StatusEffectsClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkStatusEffectTaskBase*> StatusEffectsList;
    
public:
    UHbkStatusEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEffectiveTimeEternalEnabled(FGameplayTag InStatusEffectTag, bool IsEternal);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectiveTime(FGameplayTag StatusEffectTag, float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    bool IsStatusEffective(FGameplayTag StatusEffectTag);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateStatusEffect(FGameplayTag StatusEffectTag);
    
    UFUNCTION(BlueprintCallable)
    void ActivateStatusEffect(FGameplayTag StatusEffectTag);
    
};

