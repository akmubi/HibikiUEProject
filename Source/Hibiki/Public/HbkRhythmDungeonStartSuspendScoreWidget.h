#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerStartHighScoreWidget.h"
#include "HbkRhythmDungeonStartSuspendScoreWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStartSuspendScoreWidget : public UHbkRhythmTowerStartHighScoreWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RewardGearTitleText;
    
public:
    UHbkRhythmDungeonStartSuspendScoreWidget();

};

