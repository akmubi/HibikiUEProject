#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "JukeBoxEventDelegateDelegate.h"
#include "HbkJukeBoxMeneTask.generated.h"

class AHbkJukeBoxController;
class UHbkJukeBoxMeneTask;
class UObject;

UCLASS(Blueprintable)
class UHbkJukeBoxMeneTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkJukeBoxController> JukeBoxController;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJukeBoxEventDelegate OnCloseJukeBox;
    
    UHbkJukeBoxMeneTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkJukeBoxMeneTask* ShowJukeBoxMene(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteJukeBox();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseJukeBoxMene();
    
};

