#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1350.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg1350 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_bg1350(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceStateEvent(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_bg1350(int32 NoteCount, bool bDownBeat);
    
};

