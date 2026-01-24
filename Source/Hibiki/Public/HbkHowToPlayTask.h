#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HowToPlayNoticeDelegateDelegate.h"
#include "HbkHowToPlayTask.generated.h"

class UHbkHowToPlayController;
class UHbkHowToPlayTask;
class UObject;

UCLASS(Blueprintable)
class UHbkHowToPlayTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHowToPlayNoticeDelegate OnClosed;
    
    UHbkHowToPlayTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkHowToPlayTask* ShowHowToPlay(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteHowToPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnHowToPlayClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedController(UHbkHowToPlayController* HowToPlayController);
    
};

