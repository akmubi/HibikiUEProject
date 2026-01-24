#include "HbkBNetModalMasterWidget.h"

UHbkBNetModalMasterWidget::UHbkBNetModalMasterWidget() {
    this->SelectSound = NULL;
    this->OpenDialogSound = NULL;
    this->ModalWidgetSwitcher = NULL;
    this->DummyModalWidget = NULL;
    this->QuickAccountModalWidget = NULL;
    this->LoginModalWidget = NULL;
    this->AccountExistsModalWidget = NULL;
    this->AgreementsModalWidget = NULL;
    this->UpdatedAgreementModalWidget = NULL;
    this->LinkingSuccessfulModalWidget = NULL;
    this->ManagementModalWidget = NULL;
    this->AccountHelpModalWidget = NULL;
    this->CommunicatingTextBlock = NULL;
    this->CommunicatingAnimation = NULL;
}

void UHbkBNetModalMasterWidget::OnAcceptCloseButton() {
}


