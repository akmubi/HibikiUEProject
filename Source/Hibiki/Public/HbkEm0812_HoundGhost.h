#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "HbkCharacter.h"
#include "HbkEm0812_HoundGhost.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0812_HoundGhost : public AHbkCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAnimMontage*> AnimSetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackAnimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShowHologramCharaPostActivateGroupRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HideHologramCharaPostActivateGroupRowName;
    
public:
    AHbkEm0812_HoundGhost(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortAttackState(AHbkEnemyCharacter* EmPawn, AHbkEnemyAIController* EmAI);
    
public:
    UFUNCTION(BlueprintCallable)
    void PerformAttack(FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerHit();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnd(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAdjustLoopEnd();
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetAttackBlendWeightList();
    
    UFUNCTION(BlueprintCallable)
    void DelayHideCharacter();
    
    UFUNCTION(BlueprintCallable)
    void DelayEnableShowFlag();
    
};

