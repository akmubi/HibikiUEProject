#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "HbkRhythmDungeonStartWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkListControlWidget;
class UHbkRhythmDungeonStartSuspendScoreWidget;
class UHbkRhythmTowerStartHighScoreWidget;
class UHbkRhythmTowerStartListItemWidget;
class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkRhythmDungeonStartWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NewGameDecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipmentChangeDecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReturnToHideoutDecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ListArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStartListItemWidget* ContinueItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStartHighScoreWidget* NormalModeHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonStartSuspendScoreWidget* NormalModeSuspendScore;
    
public:
    UHbkRhythmDungeonStartWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedListItem(const UHbkButtonBaseWidget* Sender);
    
};

