#pragma once
#include "CoreMinimal.h"
#include "HbkMainMenuPageWidgetDisplayEndDelegate.h"
#include "HbkUserWidget.h"
#include "HbkMainMenuPageWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UHbkMainMenuCellWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkMainMenuPageWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMainMenuPageWidgetDisplayEnd DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_DecisionClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MoveCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkMainMenuCellWidget*> ListWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_BuildInfo;
    
public:
    UHbkMainMenuPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayingAnim(bool bPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWnd();
    
    UFUNCTION(BlueprintCallable)
    void DecisionImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWnd();
    
};

