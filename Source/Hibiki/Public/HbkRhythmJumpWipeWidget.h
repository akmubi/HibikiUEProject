#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkUserWidget.h"
#include "HbkRhythmJumpWipeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmJumpWipeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkRhythmJumpWipeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnim_BP(EHbkNote NoteType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayOutAnim(EHbkNote NoteType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnim_BP(EHbkNote NoteType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayInAnim(EHbkNote NoteType);
    
};

