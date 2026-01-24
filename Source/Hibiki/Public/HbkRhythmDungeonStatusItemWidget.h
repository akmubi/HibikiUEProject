#pragma once
#include "CoreMinimal.h"
#include "HbkListItemBaseWidget.h"
#include "HbkRhythmDungeonStatusItemWidget.generated.h"

class UProgressBar;
class UTextBlock;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStatusItemWidget : public UHbkListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
public:
    UHbkRhythmDungeonStatusItemWidget();

};

