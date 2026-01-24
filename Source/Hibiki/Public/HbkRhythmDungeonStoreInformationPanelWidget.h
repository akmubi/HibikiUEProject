#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmDungeonInformationPanelBaseWidget.h"
#include "HbkRhythmDungeonStoreInformationPanelWidget.generated.h"

class UImage;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStoreInformationPanelWidget : public UHbkRhythmDungeonInformationPanelBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NoImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* ScoreRateText;
    
public:
    UHbkRhythmDungeonStoreInformationPanelWidget();

};

