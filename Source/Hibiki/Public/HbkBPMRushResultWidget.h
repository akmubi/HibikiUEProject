#pragma once
#include "CoreMinimal.h"
#include "HbkNewModeResultBaseWidget.h"
#include "HbkBPMRushResultWidget.generated.h"

class UHbkRhythmTowerResultNormalItemWidget;
class UHbkRhythmTowerResultSpecialItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkBPMRushResultWidget : public UHbkNewModeResultBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerResultNormalItemWidget* ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerResultSpecialItemWidget* RemainingTime;
    
public:
    UHbkBPMRushResultWidget();

};

