#pragma once
#include "CoreMinimal.h"
#include "HbkTaskNewTutorialDelegateDelegate.h"
#include "HbkTaskNewTutorialOnChangePageDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkTutorialHierarchyWidget.generated.h"

class UHbkTutorialBaseWidget;
class UHorizontalBox;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialHierarchyWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialDelegate DisplayEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskNewTutorialOnChangePageDelegate OnChangePage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialBaseWidget> TutorialBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PageArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PageNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PageBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* FinishTutorial;
    
public:
    UHbkTutorialHierarchyWidget();

    UFUNCTION(BlueprintCallable)
    void RestartHierarchy();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNextSE();
    
public:
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable)
    void NextHierarchy();
    
    UFUNCTION(BlueprintCallable)
    bool GetisTalkView();
    
    UFUNCTION(BlueprintCallable)
    void CloseTutorial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTalkSession_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void BackPage();
    
    UFUNCTION(BlueprintCallable)
    void BackHierarchy();
    
};

