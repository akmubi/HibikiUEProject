#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0010_PAModifLine.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0010_PAModifLine : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_bg0010_PAModifLine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_bg0010_PAModifLine(int32 NoteCount, bool bDownBeat);
    
};

