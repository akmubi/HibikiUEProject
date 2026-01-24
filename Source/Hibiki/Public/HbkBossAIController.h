#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkActionParam.h"
#include "HbkEnemyAIController.h"
#include "HbkEnemyAttackParam.h"
#include "HbkBossAIController.generated.h"

class APawn;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBossAIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBehaviorTreeStopForced;
    
public:
    AHbkBossAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ChangeStateToAttackBossWithTagParam(FGameplayTag AttackNameTag, const FHbkEnemyAttackParam& OverrideParam);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToActionWithTag(FGameplayTag ActionNameTag, const FHbkActionParam& InActionParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_GetDebugBossAttackInfo(int32 AttackIndex, FGameplayTag& AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToAttackBossWithTagParam(APawn* ControlledPawn, FGameplayTag AttackNameTag, const FHbkEnemyAttackParam& OverrideParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToAttackBossWithTag(APawn* ControlledPawn, FGameplayTag AttackNameTag, FGameplayTag AttackTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToActionWithTag(APawn* ControlledPawn, FGameplayTag ActionNameTag, const FHbkActionParam& InActionParam);
    
};

