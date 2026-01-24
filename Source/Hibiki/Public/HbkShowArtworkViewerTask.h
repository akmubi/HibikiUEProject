#pragma once
#include "CoreMinimal.h"
#include "HbkArtworkViewerWidgetOnCloseDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkShowArtworkViewerTask.generated.h"

class UHbkArtworkViewerWidget;
class UHbkShowArtworkViewerTask;
class UObject;

UCLASS(Blueprintable)
class UHbkShowArtworkViewerTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkArtworkViewerWidgetOnClose OnCloseViewer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkArtworkViewerWidget> ViewerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkArtworkViewerWidget> ViewerWidgetPtr;
    
public:
    UHbkShowArtworkViewerTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowArtworkViewerTask* ShowArtworkViewer(UObject* WorldContextObject, TSubclassOf<UHbkArtworkViewerWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseViewer();
    
};

