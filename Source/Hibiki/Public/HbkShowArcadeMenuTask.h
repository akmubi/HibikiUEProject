#pragma once
#include "CoreMinimal.h"
#include "HbkArcadeMenuOnCloseDelegate.h"
#include "HbkArcadeMenuOnLoadCompleteDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkShowArcadeMenuTask.generated.h"

class UHbkArcadeMenuController;
class UHbkShowArcadeMenuTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowArcadeMenuTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkArcadeMenuOnClose OnCloseArcadeMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkArcadeMenuOnLoadComplete OnLoadComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkArcadeMenuController> ArcadeMenuControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkArcadeMenuController* ArcadeMenuController;
    
public:
    UHbkShowArcadeMenuTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowArcadeMenuTask* ShowArcadeMenu(UObject* WorldContextObject, TSoftClassPtr<UHbkArcadeMenuController> ControllerClassSoft);
    
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseArcadeMenu();
    
};

