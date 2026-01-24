#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BossActionDelegateDelegate.h"
#include "EHbkEm4000IdleType.h"
#include "HbkBossCharacterBase.h"
#include "HbkEm4000_Korsica.generated.h"

class AHbkEm4000_AIController;

UCLASS(Blueprintable)
class AHbkEm4000_Korsica : public AHbkBossCharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase0;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase2;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase4;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase5;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase6;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhaseLast;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndLastQTE;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnSuccessQTE;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnFailedQTE;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm4000IdleType IdleType;
    
    AHbkEm4000_Korsica(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestartChangeHealth();
    
    UFUNCTION(BlueprintCallable)
    void RequestCallOnChangeHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnExAttack(const FGameplayTag& ExAttackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm4000_AIController* GetEm4000AI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformExAttack(const FGameplayTag& ExAttackTag);
    
};

