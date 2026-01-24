#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialHorizontalWidgetPosType.h"
#include "EHbkTutorialTypeName.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskNewTutorialDelegateDelegate.h"
#include "HbkTaskNewTutorialOnChangePageDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkShowNewTutorialTask.generated.h"

class UHbkShowNewTutorialTask;
class UHbkTutorialDataObject;
class UHbkTutorialDataObject_ButtonType;
class UHbkTutorialDataObject_ImageType;
class UHbkTutorialDataObject_MovieType;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowNewTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate DisplayEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate SkipTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialOnChangePageDelegate ChangePage;
    
    UHbkShowNewTutorialTask();

protected:
    UFUNCTION(BlueprintCallable)
    void TutorialSkip();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_SpecifyPageType(UObject* WorldContextObject, EHbkTutorialTypeName PageType, TSubclassOf<UHbkTutorialDataObject> FirstPageData, TSubclassOf<UHbkTutorialDataObject> SecondPageData, TSubclassOf<UHbkTutorialDataObject> ThirdPageData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_SmallPage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ButtonType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> ThirdPageData, float DisplayTime, bool isInput, bool isSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_MixPage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ButtonType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ButtonType> ThirdPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> ImgPageData, TSubclassOf<UHbkTutorialDataObject_MovieType> MoviePageData, float DisplayTime, bool isInput, EHbkTutorialHorizontalWidgetPosType HorizontalPos, bool isSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_MiddlePage_OnlyOne(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ImageType> PageData, float DisplayTime, bool isInput, EHbkTutorialHorizontalWidgetPosType HorizontalPos, bool isSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_MiddlePage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_ImageType> FirstPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> SecondPageData, TSubclassOf<UHbkTutorialDataObject_ImageType> ThirdPageData, bool isRobot, bool isSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_LargePage(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_MovieType> PageData, bool isSkip);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* ShowTutorial_ArcadeMachine(UObject* WorldContextObject, TSubclassOf<UHbkTutorialDataObject_MovieType> PageData, bool isSkip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDamaged();
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayEndClear();
    
    UFUNCTION(BlueprintCallable)
    void OnChangePage(int32 CurrentHierarchyNum);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowNewTutorialTask* CloseTutorialPage(UObject* WorldContextObject);
    
};

