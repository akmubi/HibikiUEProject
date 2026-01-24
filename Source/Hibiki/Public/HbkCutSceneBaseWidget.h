#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkCutSceneBaseWidget.generated.h"

class UHbkLevelSequencePlayer;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCutSceneBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkCutSceneBaseWidget();

    UFUNCTION(BlueprintCallable)
    void SetSequencePlayer(UHbkLevelSequencePlayer* LevelSequencePlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipedSequencer();
    
};

