#pragma once
#include "CoreMinimal.h"
#include "HbkOptionListItemBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkOptionListItemShowSettingWidget.generated.h"

class UHbkOptionSettingBaseWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionListItemShowSettingWidget : public UHbkOptionListItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkOptionSettingBaseWidget> SettingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideDisplayButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkOptionSettingBaseWidget* SettingWidget;
    
public:
    UHbkOptionListItemShowSettingWidget();

};

