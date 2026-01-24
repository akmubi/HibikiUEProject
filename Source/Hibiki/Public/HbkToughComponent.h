#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ToughActivateDelegateDelegate.h"
#include "ToughDeactivateDelegateDelegate.h"
#include "ToughTakeDamageDelegateDelegate.h"
#include "ToughValueChangedDelegateDelegate.h"
#include "ToughValueDeactiveDelegateDelegate.h"
#include "HbkToughComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkToughComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToughDeactivateDelegate OnToughDeactivate_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToughActivateDelegate OnToughActivate_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToughValueDeactiveDelegate OnToughValueDeactive_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToughValueChangedDelegate OnToughValueChanged_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToughTakeDamageDelegate OnToughTakeDamaged_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultToughValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryToughByBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryBeginBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughRecoveryAfterBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToughEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> MagnificationDamageCausedByTag;
    
public:
    UHbkToughComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToughDisable();
    
    UFUNCTION(BlueprintCallable)
    void SetToughRecoveryEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetToughRecoveryAfterBreak(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetToughLevel(int32 NewToughLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetToughEnable(bool IsToughEnable);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryToughFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToughRecovery() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTough();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKorsicaWindDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetToughLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceToughDisable();
    
};

