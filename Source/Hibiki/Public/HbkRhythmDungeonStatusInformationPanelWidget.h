#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmDungeonInformationPanelBaseWidget.h"
#include "HbkRhythmDungeonStatusInformationPanelWidget.generated.h"

class UPanelWidget;
class UTextBlock;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStatusInformationPanelWidget : public UHbkRhythmDungeonInformationPanelBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_CurrentValueNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_MaxValueNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StatusRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StatusTextRoot;
    
public:
    UHbkRhythmDungeonStatusInformationPanelWidget();

};

