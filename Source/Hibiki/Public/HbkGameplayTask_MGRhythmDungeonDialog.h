#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmDungeonDialog.generated.h"

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmDungeonDialog : public UObject {
    GENERATED_BODY()
public:
    UHbkGameplayTask_MGRhythmDungeonDialog();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAcceptYesButton();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptNoButton();
    
};

