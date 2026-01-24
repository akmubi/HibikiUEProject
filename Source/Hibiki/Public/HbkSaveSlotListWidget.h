#pragma once
#include "CoreMinimal.h"
#include "HbkSaveSlotListWidgetDisplayEndDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkSaveSlotListWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UHbkListControlWidget;
class UHbkSaveSlotCellBaseWidget;
class UHbkSaveSlotExistCellWidget;
class UHbkSaveSlotNewCellWidget;
class UHbkTitleMenuBGWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UHbkSaveSlotListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSaveSlotListWidgetDisplayEnd DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTitleMenuBGWidget* BaseBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_DecisionClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_CancelClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MoveCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSaveSlotNewCellWidget> NewCellWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSaveSlotExistCellWidget> ExistCellWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageDetailTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkSaveSlotCellBaseWidget*> SlotCellWidgets;
    
public:
    UHbkSaveSlotListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayingAnim(bool bPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogOverwriteSave();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogDeleteSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitDispNewGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitDispLoadMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWnd();
    
};

