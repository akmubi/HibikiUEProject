#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkAchievementsListWidget.generated.h"

class UHbkAchievementsListItemWidget;
class UHbkListControlWidget;
class UPanelWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkAchievementsListItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkAchievementsListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void AutoScroll(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

