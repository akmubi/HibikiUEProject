#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkMultipleToughCompInitParam.h"
#include "HbkMultipleToughParam.h"
#include "MultipleToughActivateDelegateDelegate.h"
#include "MultipleToughDeactivateDelegateDelegate.h"
#include "MultipleToughTakeDamageDelegateDelegate.h"
#include "HbkMultipleToughComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkMultipleToughComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleToughDeactivateDelegate OnToughDeactivate_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleToughActivateDelegate OnToughActivate_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleToughTakeDamageDelegate OnToughTakeDamage_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultipleToughActivateDelegate OnToughActivateRecovered_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultipleToughCompInitParam InitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMultipleToughParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughRecoveryEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughRecoveryResetWhenAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> MagnificationDamageCausedByTag;
    
public:
    UHbkMultipleToughComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetToughValueByScaleAll(float ToughValueMultiple);
    
    UFUNCTION(BlueprintCallable)
    void SetToughValueByScale(int32 Index, float ToughValueMultiple);
    
    UFUNCTION(BlueprintCallable)
    void SetToughValue(int32 Index, float ToughValue);
    
    UFUNCTION(BlueprintCallable)
    void SetToughRecoveryEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetToughEnable(bool NewIsToughEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMainIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableNotifyDamage(int32 Index, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryToughFull(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageAlive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToughRecoveryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToughMain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToughEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTough(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNotifyDamage(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FHbkMultipleToughCompInitParam& InInitParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkMultipleToughParam GetToughParamForDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkMultipleToughParam GetToughParam(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplayIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceToughDisable(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ForceMainToughDisable();
    
    UFUNCTION(BlueprintCallable)
    void AllRecoveryToughFull();
    
    UFUNCTION(BlueprintCallable)
    void AllForceToughDisable();
    
};

