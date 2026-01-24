#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugEnemyAllKillWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugEnemyAllKillWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnableAnimation;
    
public:
    UHbkDebugEnemyAllKillWidget();

};

