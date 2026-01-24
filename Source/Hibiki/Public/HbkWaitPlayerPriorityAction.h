#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "PlayerAsyncActionDelegateDelegate.h"
#include "HbkWaitPlayerPriorityAction.generated.h"

class UHbkWaitPlayerPriorityAction;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkWaitPlayerPriorityAction : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate EndedWait;
    
    UHbkWaitPlayerPriorityAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkWaitPlayerPriorityAction* WaitPlayerPriorityAction(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndedSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnEndedJamComboAttack();
    
};

