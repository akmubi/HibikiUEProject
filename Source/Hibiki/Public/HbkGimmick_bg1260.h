#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAHbkGimmick_AHbkGimmick_bg1260AnimType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1260.generated.h"

class AActor;
class UDamageType;
class UHbkGimmickOneShotAnimComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class AHbkGimmick_bg1260 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartnerTargetPointDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovedDelegate OnMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartnerTargetPointDelegate OnPartnerLockon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartnerTargetPointDelegate OnPartnerUnLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartnerTargetPointDelegate OnPartnerBeginAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartnerTargetPointDelegate OnPartnerSuccessAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartnerTargetPointDelegate OnPartnerFailedAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAHbkGimmick_AHbkGimmick_bg1260AnimType AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGimmickOneShotAnimComponent* OneShotAnimComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bMoved;
    
public:
    AHbkGimmick_bg1260(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointUnLock();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointSuccessAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointLockon();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointFailedAction();
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerTargetPointBeginAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAHbkGimmick_AHbkGimmick_bg1260AnimType GetAnimType() const;
    
};

