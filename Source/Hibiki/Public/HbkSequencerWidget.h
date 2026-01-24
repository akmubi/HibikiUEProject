#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSequencerWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSequencerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> WidgetList;
    
public:
    UHbkSequencerWidget();

    UFUNCTION(BlueprintCallable)
    void ShowUI(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWidgetList(TArray<UWidget*> NewWidgetList);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideUI(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnShowUI(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnHideUI(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AllShowUI();
    
    UFUNCTION(BlueprintCallable)
    void AllHideUI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddWidgetList(UWidget* NewWidget);
    
};

