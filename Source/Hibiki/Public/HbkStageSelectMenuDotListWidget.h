#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStageSelectMenuDotListWidget.generated.h"

class UHbkListControlWidget;
class UHbkStageSelectMenuDotListItemWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectMenuDotListWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStageSelectMenuDotListItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSpaceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ItemArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkStageSelectMenuDotListWidget();

};

