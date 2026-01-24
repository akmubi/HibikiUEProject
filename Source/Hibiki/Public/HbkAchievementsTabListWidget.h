#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsTabListWidget.generated.h"

class UHbkListControlWidget;
class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsTabListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TabArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TabNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkAchievementsTabListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTabInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

