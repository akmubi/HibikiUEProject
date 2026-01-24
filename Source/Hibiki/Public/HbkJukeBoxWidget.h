#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkJukeBoxWidget.generated.h"

class AHbkJukeBoxController;
class UAkAudioEvent;
class UHbkJukeBoxButtonWidget;
class UHbkJukeBoxHoldBarWidget;
class UHbkJukeBoxMusicPlayerWidget;
class UHbkJukeBoxScrollListWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkJukeBoxController> JukeBoxController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Cursor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxScrollListWidget* JukeboxScrollList_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxMusicPlayerWidget* JukeboxMusicPlayer_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_TicketNum;
    
public:
    UHbkJukeBoxWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAutoSaveOnHideOut();
    
    UFUNCTION(BlueprintCallable)
    void ReceivePurchaseComplete(const UHbkJukeBoxHoldBarWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOnClickedShuffleButton(const UHbkJukeBoxButtonWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOnClickedRepeatButton(const UHbkJukeBoxButtonWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOnClickedPlayStopButton(const UHbkJukeBoxButtonWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOnClickedNextButton(const UHbkJukeBoxButtonWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOnClickedBackButton(const UHbkJukeBoxButtonWidget* Sender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPageInAnimation();
    
};

