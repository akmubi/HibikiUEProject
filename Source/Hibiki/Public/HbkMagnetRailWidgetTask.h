#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskMagnetRailWidgetDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkMagnetRailWidgetTask.generated.h"

class UHbkMagnetRailWidget;
class UHbkMagnetRailWidgetTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkMagnetRailWidgetTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskMagnetRailWidgetDelegate DisplayEnd;
    
    UHbkMagnetRailWidgetTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkMagnetRailWidgetTask* ShowMagnetRailWidget(UObject* WorldContextObject, TSubclassOf<UHbkMagnetRailWidget> WidgetClass, float Timer, float offset_X, float offset_Y);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndMagnetRail();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseMagnetRailWidget(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearTimer();
    
};

