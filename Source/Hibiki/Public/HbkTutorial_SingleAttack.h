#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTutorial_SingleAttack.generated.h"

class AHbkIt0000_Bopbag;
class UHbkTutorial_SingleAttack;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTutorial_SingleAttack : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTutorialSingleAttackDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialSingleAttackDelegate OnAttackHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialSingleAttackDelegate OnTutorialEnd;
    
    UHbkTutorial_SingleAttack();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkTutorial_SingleAttack* TutorialSingleSecondAttack(UObject* WorldContextObject, AHbkIt0000_Bopbag* Bopbag, int32 AttackCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkTutorial_SingleAttack* TutorialSingleNormalAttack(UObject* WorldContextObject, AHbkIt0000_Bopbag* Bopbag, int32 AttackCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger();
    
};

