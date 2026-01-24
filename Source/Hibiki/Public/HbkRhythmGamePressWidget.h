#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmNoteType.h"
#include "HbkUserWidget.h"
#include "RhythmGameHoldStartDelegateDelegate.h"
#include "HbkRhythmGamePressWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmGamePressWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmGameHoldStartDelegate OnHoldStart;
    
    UHbkRhythmGamePressWidget();

    UFUNCTION(BlueprintCallable)
    void StartBeatHit_Press();
    
    UFUNCTION(BlueprintCallable)
    void StartBeatHit_Hold(float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonIcon(EHbkRhythmNoteType NoteType);
    
    UFUNCTION(BlueprintCallable)
    void PlaySuccessAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartBeatHit_Press();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartBeatHit_Hold(float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlaySuccessAnim();
    
};

