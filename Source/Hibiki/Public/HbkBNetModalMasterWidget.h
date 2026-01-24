#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBNetModalMasterWidget.generated.h"

class UAkAudioEvent;
class UHbkBNetAccountExistsModalWidget;
class UHbkBNetAccountHelpModalWidget;
class UHbkBNetAgreementsModalWidget;
class UHbkBNetLinkingSuccessfulModalWidget;
class UHbkBNetLoginModalWidget;
class UHbkBNetManagementModalWidget;
class UHbkBNetModalBaseWidget;
class UHbkBNetQuickAccountModalWidget;
class UHbkBNetUpdatedAgreementModalWidget;
class UTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetModalMasterWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenDialogSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ModalWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetModalBaseWidget* DummyModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetQuickAccountModalWidget* QuickAccountModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLoginModalWidget* LoginModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetAccountExistsModalWidget* AccountExistsModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetAgreementsModalWidget* AgreementsModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetUpdatedAgreementModalWidget* UpdatedAgreementModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetLinkingSuccessfulModalWidget* LinkingSuccessfulModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetManagementModalWidget* ManagementModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetAccountHelpModalWidget* AccountHelpModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CommunicatingTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CommunicatingAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkBNetModalBaseWidget*> ModalWidgetStack;
    
public:
    UHbkBNetModalMasterWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnAcceptCloseButton();
    
};

