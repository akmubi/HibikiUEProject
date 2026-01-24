#pragma once
#include "CoreMinimal.h"
#include "EHbkLetterBoxType.h"
#include "EHbkNote.h"
#include "HbkUserWidget.h"
#include "HbkLetterBoxWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkLetterBoxWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkLetterBoxWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimVertical_BP(EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimHorizontal_BP(EHbkNote NoteType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayOutAnim(EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimVertical_BP(EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimHorizontal_BP(EHbkNote NoteType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayInAnim(EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
};

