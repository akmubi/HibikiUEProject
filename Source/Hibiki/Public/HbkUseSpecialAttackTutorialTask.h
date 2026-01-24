#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskTutorialDelegateDelegate.h"
#include "HbkUseSpecialAttackTutorialTask.generated.h"

class UHbkUseSpecialAttackTutorialTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkUseSpecialAttackTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate OnUsed;
    
    UHbkUseSpecialAttackTutorialTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkUseSpecialAttackTutorialTask* WaitUseSpecialAttack(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndedSpecialAttack();
    
};

