#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerResultItemBaseWidget.h"
#include "HbkRhythmTowerResultNormalItemWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerResultNormalItemWidget : public UHbkRhythmTowerResultItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
public:
    UHbkRhythmTowerResultNormalItemWidget();

};

