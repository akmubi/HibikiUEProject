#pragma once
#include "CoreMinimal.h"
#include "HbkTrainingRoom_SelectItemBaseWidget.h"
#include "HbkTrainingRoom_ComboItemWidget.generated.h"

class UButton;
class UImage;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_ComboItemWidget : public UHbkTrainingRoom_SelectItemBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SelectButton2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CheckMarkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* ComboTextBlock;
    
public:
    UHbkTrainingRoom_ComboItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchSelectionState(bool isSelection);
    
};

