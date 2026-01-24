#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HbkBossAIController.h"
#include "HbkEm7500_AIController.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7500_AIController : public AHbkBossAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeFromAttackPre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShortDistanceAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MiddleDistanceAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LongDistanceAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MultiSlashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShoulderChargeSlashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HelmDivideSlashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmFlamethrowerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmBeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmSupportTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmChargeTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackCategorySelectRate;
    
public:
    AHbkEm7500_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsReadyMultiSlash(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMoveTaskRunning(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackTaskRunning(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackCategorySelectRate(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RecordAttackHistory(FGameplayTag AttackNameTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectShortDistanceAttack() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetNextReserveAttackTagP2();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsReadyMultiSlash();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMoveTaskRunning();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAttackTaskRunning();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetAttackHistory();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAttackCategorySelectRate();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackHistory();
    
};

