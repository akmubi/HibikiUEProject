#pragma once
#include "CoreMinimal.h"
#include "HbkTalkContext.h"
#include "HbkWindowBaseWidget.h"
#include "HbkStoreMenuSelectWidget.generated.h"

class AHbkTalkSession;
class UAkAudioEvent;
class UDataTable;
class UHbkButtonBaseWidget;
class UHbkStoreCommonBackgroundWidget;
class UHbkStoreHighlightWidget;
class UHbkStoreMenuSelectButtonDescriptionWidget;
class UHbkStoreMenuSelectButtonListWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSelectWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeSoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RestoreSoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonBackgroundWidget* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSelectButtonListWidget* ButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSelectButtonDescriptionWidget* ButtonDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreHighlightWidget* Highlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* InputMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenForRhythmTowerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTalkSession* TutorialTalkSession;
    
public:
    UHbkStoreMenuSelectWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateButtonDescription(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTutorialTalk(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedButtonListItem(const UHbkButtonBaseWidget* Sender);
    
};

