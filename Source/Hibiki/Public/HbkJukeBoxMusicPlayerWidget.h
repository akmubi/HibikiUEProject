#pragma once
#include "CoreMinimal.h"
#include "EHbkJukeBoxRepeatType.h"
#include "HbkJukeBoxChildrenBaseWidget.h"
#include "HbkJukeBoxMusicPlayerWidget.generated.h"

class UHbkJukeBoxButtonWidget;
class UHbkJukeBoxHoldBarWidget;
class UHbkJukeBoxPlayStopButtonWidget;
class UHbkJukeBoxRepeatButtonWidget;
class UHbkJukeBoxShuffleButtonWidget;
class UHorizontalBox;
class UOverlay;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxMusicPlayerWidget : public UHbkJukeBoxChildrenBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* TimeBarSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_MusicTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* NowPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ControlPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxHoldBarWidget* JukeboxPurchaseBar_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxRepeatButtonWidget* JukeboxRepeatButton_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxPlayStopButtonWidget* JukeboxPlayStopButton_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxShuffleButtonWidget* JukeboxShuffleButton_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxButtonWidget* JukeboxNextButton_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxButtonWidget* JukeboxBackButton_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* NotEnoughText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_RequiredTicket;
    
public:
    UHbkJukeBoxMusicPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SwitchRepeatTypeNotify(EHbkJukeBoxRepeatType RepeatType);
    
    UFUNCTION(BlueprintCallable)
    void StopMusicNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShuffleMouseOverAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeRate(float NewRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepeatMouseOverAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStopMouseOverAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShuffleSelectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRepeatSelectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPurchaseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPlayingAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusicNotify(FText PlayingMusicText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextMouseOverAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishMusicNotify();
    
    UFUNCTION(BlueprintCallable)
    void ChangeShuffleEnable(bool bShuffleEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackMouseOverAnim();
    
};

