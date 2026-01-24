#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmTowerTimerWidget.generated.h"

class UHbkCommonTimerWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerTimerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCommonTimerWidget* CountDownTimer;
    
public:
    UHbkRhythmTowerTimerWidget();

};

