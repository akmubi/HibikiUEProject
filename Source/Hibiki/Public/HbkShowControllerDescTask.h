#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskControllerDescDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowControllerDescTask.generated.h"

class UHbkControllerDescriptionWidget;
class UHbkShowControllerDescTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowControllerDescTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskControllerDescDelegate DisplayEnd;
    
    UHbkShowControllerDescTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowControllerDescTask* ShowDescription(UObject* WorldContextObject, TSubclassOf<UHbkControllerDescriptionWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndDescription();
    
};

