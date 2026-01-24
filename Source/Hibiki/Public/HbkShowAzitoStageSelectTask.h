#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskAzitoStageSelectDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowAzitoStageSelectTask.generated.h"

class UHbkAzitoStageSelectWidget;
class UHbkShowAzitoStageSelectTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowAzitoStageSelectTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskAzitoStageSelectDelegate DisplayEnd;
    
    UHbkShowAzitoStageSelectTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowAzitoStageSelectTask* ShowStageSelect(UObject* WorldContextObject, TSubclassOf<UHbkAzitoStageSelectWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndStageSelect();
    
};

