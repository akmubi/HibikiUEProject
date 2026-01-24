#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkRhythmTowerStoreInformationPanelWidget.generated.h"

class UImage;
class UScrollBox;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerStoreInformationPanelWidget : public UHbkUserWidget {
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
    UTngRichTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DescriptionScrollBox;
    
public:
    UHbkRhythmTowerStoreInformationPanelWidget();

};

