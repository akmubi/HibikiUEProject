#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionListItemType.h"
#include "EHbkOptionSettingType.h"
#include "HbkOptionListItemBaseWidget.h"
#include "HbkOptionSelectionListEntry.h"
#include "HbkOptionListItemWidget.generated.h"

class UFont;
class UHbkOptionSettingValueWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionListItemWidget : public UHbkOptionListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkOptionSettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkOptionListItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkOptionSelectionListEntry> SelectionListEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SliderMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SliderMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SliderAmount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* SettingValueCustomFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionSettingValueWidget* SettingValue;
    
public:
    UHbkOptionListItemWidget();

};

