#pragma once
#include "CoreMinimal.h"
#include "EHbkStageResultNextSelectItemType.h"
#include "HbkStageResultNextSelectWidgetDisplayEndDelegate.h"
#include "HbkUserWidget.h"
#include "HbkStageResultNextSelectWidget.generated.h"

class UAkAudioEvent;
class UHbkStageResultNextSelectCellWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkStageResultNextSelectWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageResultNextSelectWidgetDisplayEnd DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_DecisionClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MoveCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkStageResultNextSelectItemType, FText> ItemNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkStageResultNextSelectCellWidget*> AllItemWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkStageResultNextSelectCellWidget*> Items;
    
public:
    UHbkStageResultNextSelectWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayingAnim(bool bPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWnd();
    
};

