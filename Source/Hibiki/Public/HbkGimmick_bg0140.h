#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0140.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0140 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_bg0140(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatSynchroAction(const int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIdleType();
    
};

