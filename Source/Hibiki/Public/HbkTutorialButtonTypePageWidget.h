#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialKeyButtonMap.h"
#include "ETngKeyButtonMap.h"
#include "HbkTutorialPageBaseWidget.h"
#include "HbkTutorialButtonTypePageWidget.generated.h"

class UPanelWidget;
class URichTextBlock;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialButtonTypePageWidget : public UHbkTutorialPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AllButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonSingleBaseParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Single;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Single_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonMultiBaseParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Multi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Multi_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonDescBaseParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonTextBox_Desc_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* TitleSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonTagHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonTagFooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InAirText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HoldText;
    
public:
    UHbkTutorialButtonTypePageWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewCreateButtonText_BP(EHbkTutorialKeyButtonMap ButtonName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateButtonText_BP(ETngKeyButtonMap ButtonName);
    
};

