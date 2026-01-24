#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "HbkBPMRushStartWidget.generated.h"

class UAkAudioEvent;
class UHbkBPMRushStartListItemWidget;
class UHbkButtonBaseWidget;
class UHbkListControlWidget;
class UHbkRhythmTowerStartHighScoreWidget;
class UPanelWidget;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkBPMRushStartWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NewGameDecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReturnToHideoutDecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ListArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStartHighScoreWidget* NormalModeHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBPMRushStartListItemWidget* EasyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBPMRushStartListItemWidget* NormalItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBPMRushStartListItemWidget* ExItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBPMRushStartListItemWidget* DisableExItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowNormalModeHighScoreAnimation;
    
public:
    UHbkBPMRushStartWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnClosedDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedListItem(const UHbkButtonBaseWidget* Sender);
    
};

