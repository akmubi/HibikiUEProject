#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmNoteType.h"
#include "HbkUserWidget.h"
#include "HbkScoreBarPartsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkScoreBarPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkScoreBarPartsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetType(EHbkRhythmNoteType buttonType, bool bHold, bool bRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPassInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppear(bool bIsQuarter);
    
};

