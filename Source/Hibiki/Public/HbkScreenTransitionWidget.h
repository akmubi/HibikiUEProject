#pragma once
#include "CoreMinimal.h"
#include "EHbkLetterBoxType.h"
#include "EHbkNote.h"
#include "EHbkScreenFadeType.h"
#include "EHbkScreenWipeType.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkFadeFunc.h"
#include "HbkScreenTransitContext.h"
#include "HbkUserWidget.h"
#include "HbkScreenTransitionWidget.generated.h"

class UHbkLetterBoxWidget;
class UHbkRhythmJumpWipeWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkScreenTransitionWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkLetterBoxWidget> LetterBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmJumpWipeWidget> RhythmJumpWipeWidget;
    
public:
    UHbkScreenTransitionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartWipeAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFadeAnim(EHbkTalkFadeFunc FadeFunc);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWipeAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFadeUI();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFadeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnStartScreenFade(EHbkScreenFadeType FadeType, EHbkTalkFadeFunc FadeFunc, float Duration, EHbkTalkFadeColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnStartRhythmJumpWipe(EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnStartLetterBox(EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHbkScreenTransitContext Blueprint_OnPlayScreenWipe(EHbkScreenWipeType InWipeType, float InWipeDuration, EHbkTalkFadeFunc InorOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnEndRhythmJumpWipe(UHbkRhythmJumpWipeWidget* Widget, EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnEndLetterBox(UHbkLetterBoxWidget* Widget, EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
};

