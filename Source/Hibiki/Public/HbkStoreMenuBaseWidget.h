#pragma once
#include "CoreMinimal.h"
#include "HbkTalkContext.h"
#include "HbkWindowBaseWidget.h"
#include "HbkStoreMenuBaseWidget.generated.h"

class AHbkTalkSession;
class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkStoreCommonBackgroundWidget;
class UHbkStoreCommonListWidget;
class UHbkStoreCommonPurchaseCommandWidget;
class UHbkStoreCommonResourceListWidget;
class UHbkStoreHighlightWidget;
class UHbkStoreInformationPanelBaseWidget;
class UHbkStoreMenuSelectWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuBaseWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PurchaseSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SellSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UpgradeSuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipmentChangeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CharacterTabChangeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonBackgroundWidget* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonListWidget* ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonPurchaseCommandWidget* PurchaseCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreCommonResourceListWidget* ResourceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreInformationPanelBaseWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreHighlightWidget* Highlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* InputMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuSelectWidget* MenuSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTalkSession* TutorialTalkSession;
    
public:
    UHbkStoreMenuBaseWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldDownFailedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnHoldDownCompletedPurchaseCommand(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTutorialTalk(const FHbkTalkContext TalkContext);
    
};

