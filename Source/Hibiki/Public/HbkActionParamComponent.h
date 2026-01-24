#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkActionParam.h"
#include "HbkActionRepParam.h"
#include "HbkDamageParam.h"
#include "HbkDamageRepParam.h"
#include "PlayDamageAnimationDelegate.h"
#include "HbkActionParamComponent.generated.h"

class UAnimSequenceBase;
class UHbkActionInfoAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkActionParamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayDamageAnimation PlayDamageAnimationDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActionRepParam, meta=(AllowPrivateAccess=true))
    FHbkActionRepParam CurrentActionRepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkActionInfoAsset* ActionInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDamageRepParam, meta=(AllowPrivateAccess=true))
    FHbkDamageRepParam CurrentDamageRepParam;
    
public:
    UHbkActionParamComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetActionTagParam(const FGameplayTag& ActTag, FHbkActionParam Param);
    
    UFUNCTION(BlueprintCallable)
    void SetActionAnimParam(UAnimSequenceBase* Anim, FHbkActionParam Param);
    
    UFUNCTION(BlueprintCallable)
    void PerformDamage(UAnimSequenceBase* Anim, FHbkDamageParam Param);
    
    UFUNCTION(BlueprintCallable)
    void PerformActionWithParam(const FGameplayTag& ActTag, FHbkActionParam Param);
    
    UFUNCTION(BlueprintCallable)
    void PerformAction(UAnimSequenceBase* Anim, FHbkActionParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentDamageRepParam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActionRepParam();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetActionTag();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetActionKeyListWithTag(const FGameplayTag& ActTag);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetActionAnimFromTag(const FGameplayTag& ActTag);
    
};

