#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialResultType.h"
#include "HbkUserWidget.h"
#include "HbkTutorialParentWidget.generated.h"

class UHbkTutorialWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkTutorialWidget> MainTutorialWidget;
    
public:
    UHbkTutorialParentWidget();

    UFUNCTION(BlueprintCallable)
    void TestResult(EHbkTutorialResultType ResultType);
    
    UFUNCTION(BlueprintCallable)
    void TestMiss(bool IsInputMiss);
    
    UFUNCTION(BlueprintCallable)
    void SetMainTutorialWidget(UHbkTutorialWidget* TutorialWidget);
    
    UFUNCTION(BlueprintCallable)
    void LastHitHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkTutorialWidget* GetTutorialWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNearButtonNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnLastHitHide();
    
};

