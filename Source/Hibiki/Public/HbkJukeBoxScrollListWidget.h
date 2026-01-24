#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxChildrenBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkJukeBoxScrollListWidget.generated.h"

class UHbkJukeBoxListItemWidget;
class UHbkListControlWidget;
class UScrollBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxScrollListWidget : public UHbkJukeBoxChildrenBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkJukeBoxListItemWidget> ItemWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkJukeBoxListItemWidget*> ItemWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SoundVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SoundScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkJukeBoxScrollListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void StopMusicNotify();
    
    UFUNCTION(BlueprintCallable)
    void PlayNextMusicNotify();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusicNotify(FText PlayingMusicText);
    
    UFUNCTION(BlueprintCallable)
    void FinishRepeatAllNotify();
    
};

