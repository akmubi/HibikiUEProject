#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "BopbagActionDelegateDelegate.h"
#include "HbkCharacter.h"
#include "HbkIt0000_Bopbag.generated.h"

class AActor;
class AController;
class UCapsuleComponent;
class UDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkIt0000_Bopbag : public AHbkCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBopbagActionDelegate PostBlowOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBopbagActionDelegate OnNormalDamageTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBopbagActionDelegate OnSecondDamageTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeatHitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NormalAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SecondAttackTag;
    
public:
    AHbkIt0000_Bopbag(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Receive_DamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageAnim(const FVector& DamageDir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCapsuleComponent* Blueprint_GetAdditionalCapsuleComp();
    

    // Fix for true pure virtual functions not being implemented
};

