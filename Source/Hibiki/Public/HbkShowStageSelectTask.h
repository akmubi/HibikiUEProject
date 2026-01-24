#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskStageSelectDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowStageSelectTask.generated.h"

class UHbkShowStageSelectTask;
class UHbkStageSelectWidget;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowStageSelectTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskStageSelectDelegate DisplayEnd;
    
    UHbkShowStageSelectTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowStageSelectTask* ShowStageSelect(UObject* WorldContextObject, TSubclassOf<UHbkStageSelectWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndStageSelect();
    
};

