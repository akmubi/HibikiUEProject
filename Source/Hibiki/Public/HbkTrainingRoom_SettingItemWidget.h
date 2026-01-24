#pragma once
#include "CoreMinimal.h"
#include "EHbkTrainingRoomSettingType.h"
#include "HbkTrainingRoom_SelectItemBaseWidget.h"
#include "HbkTrainingRoom_SettingItemWidget.generated.h"

class UButton;
class UHbkTrainingRoom_SettingValueWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_SettingItemWidget : public UHbkTrainingRoom_SelectItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingValueWidget* SettingValueWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnSelectableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTrainingRoomSettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CommandPanelButton;
    
public:
    UHbkTrainingRoom_SettingItemWidget();

    UFUNCTION(BlueprintCallable)
    void AddRightValue();
    
    UFUNCTION(BlueprintCallable)
    void AddLeftValue();
    
};

