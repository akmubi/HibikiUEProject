#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkAutoComboButtonType.h"
#include "EHbkPartnerType.h"
#include "EHbkPlayerAppendAbilityType.h"
#include "EHbkPlayerAutoActionInputType.h"
#include "EHbkReverbGaugeConsumeType.h"
#include "PlayerAutoActionDelegateDelegate.h"
#include "HbkPlayerAutoActionComponent.generated.h"

class UDamageType;
class UHbkPlayerAutoComboDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPlayerAutoActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAutoActionDelegate OnInputSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAutoActionDelegate OnInputFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerAutoComboDataAsset* AutoComboDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkAutoComboButtonType, EHbkPlayerAutoActionInputType> InputButtonMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FGameplayTag> JamComboTagMap_Ground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FGameplayTag> JamComboTagMap_Air;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkPartnerType> CheckCallPartnerList;
    
public:
    UHbkPlayerAutoActionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSuccessParryPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSuccessParry();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLearnedAbility(EHbkPlayerAppendAbilityType NewAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDodgeStart();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAttackHit(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerActionEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnConsumePlayerReverbGauge(EHbkReverbGaugeConsumeType ConsumeType);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackAnimStart(const FGameplayTag& AttackTag, int32 ComboCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAccumulateReverbGauge();
    
};

