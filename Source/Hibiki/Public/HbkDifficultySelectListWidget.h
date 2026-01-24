#pragma once
#include "CoreMinimal.h"
#include "HbkDifficultySelectListWidgetDisplayEndDelegate.h"
#include "HbkUserWidget.h"
#include "HbkDifficultySelectListWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UHbkDifficultySelectCellWidget;
class UScrollBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDifficultySelectListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDifficultySelectListWidgetDisplayEnd DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_DecisionClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_CancelClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_MoveCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkDifficultySelectCellWidget*> ListWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* DescTextScrollBox;
    
public:
    UHbkDifficultySelectListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayingAnim(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    void SetDescTextScroll(float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescPos(int32 CurPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescImage(const UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWnd();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenWnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWnd();
    
};

