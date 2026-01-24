#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskComboListDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowComboListTask.generated.h"

class UHbkComboListWidget;
class UHbkShowComboListTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowComboListTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskComboListDelegate DisplayEnd;
    
    UHbkShowComboListTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowComboListTask* ShowComboList(UObject* WorldContextObject, TSubclassOf<UHbkComboListWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndClear();
    
};

