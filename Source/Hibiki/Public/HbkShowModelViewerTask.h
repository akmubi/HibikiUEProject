#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkModelViewerWidgetOnCloseDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowModelViewerTask.generated.h"

class UHbkModelViewerBaseWidget;
class UHbkShowModelViewerTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowModelViewerTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkModelViewerWidgetOnClose OnCloseModelViewer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkModelViewerBaseWidget> ModelViewerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkModelViewerBaseWidget* ModelViewerWidget;
    
public:
    UHbkShowModelViewerTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowModelViewerTask* ShowModelViewer(UObject* WorldContextObject, TSubclassOf<UHbkModelViewerBaseWidget> WidgetClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseModelViewer();
    
};

