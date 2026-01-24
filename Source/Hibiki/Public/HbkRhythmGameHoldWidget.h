#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkRhythmNoteType.h"
#include "HbkUserWidget.h"
#include "HbkRhythmGameHoldWidget.generated.h"

class UHbkRhythmGamePressWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmGameHoldWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmGamePressWidget* LeftBeatHitWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmGamePressWidget* RightBeatHitWidget;
    
public:
    UHbkRhythmGameHoldWidget();

private:
    UFUNCTION(BlueprintCallable)
    void VisibilityChanged(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonIcon(EHbkRhythmNoteType NoteType);
    
    UFUNCTION(BlueprintCallable)
    void RightBeatHitStart();
    
    UFUNCTION(BlueprintCallable)
    bool PlaySuccessAnim();
    
    UFUNCTION(BlueprintCallable)
    void LeftBeatHitStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_RightBeatHitStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_PlaySuccessAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_LeftBeatHitStart();
    
};

