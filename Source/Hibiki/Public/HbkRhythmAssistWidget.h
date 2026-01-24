#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmAssistWidget.generated.h"

class UHbkRhythmAssistCatWidget;
class UHbkRhythmAssistPartsWidget;
class UOverlay;
class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmAssistWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmAssistPartsWidget> CirclePartsClass;
    
public:
    UHbkRhythmAssistWidget();

    UFUNCTION(BlueprintCallable)
    void StartRhythmAssist();
    
    UFUNCTION(BlueprintCallable)
    void SetPartsWidget(UOverlay* NewCirclePanel, UWidget* NewSizePanel, UHbkRhythmAssistCatWidget* NewCatWidget, UPanelWidget* NewInputPanel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeatEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNotJustTimingInput();
    
    UFUNCTION(BlueprintCallable)
    void OnJustTimingInput();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitGood();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitFailure();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatEvent(float PlayRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAutoActionStateChange(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoActionInputSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoActionInputFailure();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRhythmAssist();
    
};

