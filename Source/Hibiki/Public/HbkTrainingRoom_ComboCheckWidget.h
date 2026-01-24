#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTrainingRoom_ComboCheckWidget.generated.h"

class UImage;
class UTextBlock;
class UTngRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_ComboCheckWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AddCheckMarkAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CheckMarkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ComboNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* ComboTextBlock;
    
public:
    UHbkTrainingRoom_ComboCheckWidget();

};

