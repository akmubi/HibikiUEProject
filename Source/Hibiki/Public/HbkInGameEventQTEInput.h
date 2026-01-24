#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "PlayerAsyncActionDelegateDelegate.h"
#include "HbkInGameEventQTEInput.generated.h"

class UHbkInGameEventQTEInput;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInGameEventQTEInput : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate InputSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate InputFailed;
    
    UHbkInGameEventQTEInput();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnFailed();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkInGameEventQTEInput* InGameEventQTEInput(UObject* WorldContextObject);
    
};

