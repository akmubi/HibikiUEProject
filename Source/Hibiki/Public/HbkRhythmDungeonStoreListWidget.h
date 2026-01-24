#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmDungeonStoreListWidget.generated.h"

class UHbkListControlWidget;
class UHbkRhythmDungeonStoreItemWidget;
class UPanelWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmDungeonStoreListWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStoreItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkRhythmDungeonStoreListWidget();

private:
    UFUNCTION(BlueprintCallable)
    void AutoScroll(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

