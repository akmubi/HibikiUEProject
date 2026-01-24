#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmDungeonStatusListWidget.generated.h"

class UHbkListControlWidget;
class UHbkRhythmDungeonStatusItemWidget;
class UPanelWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStatusListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStatusItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkRhythmDungeonStatusListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void AutoScroll(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

