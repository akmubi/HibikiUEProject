#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1170.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg1170 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_bg1170(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_bg1170(int32 NoteCount, bool bDownBeat);
    
};

